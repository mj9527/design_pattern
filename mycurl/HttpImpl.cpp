//
// Created by mjzheng on 2020/8/31.
//

#include "curl.h"


#include <iostream>
#include <sstream>

struct my_info {
    int shoesize;
    char *secret;
};

static size_t header_callback(char *buffer, size_t size, size_t nitems, void *userdata)
{
    struct my_info *i = (struct my_info *)userdata;

    /* now this callback can access the my_info struct */
    std::string item(buffer, nitems*size);
    std::cout <<"one header " <<  item ;

    return nitems * size;
}

size_t read_callback(char *buffer, size_t size, size_t nitems, void *userdata)
{
    std::cout << "read callback" << std::endl;
    return nitems * size;
}

size_t write_callback(char *ptr, size_t size, size_t nmemb, void *userdata)
{
    std::string item(ptr, nmemb*size);
    std::cout <<"body " <<  item ;

    return size * nmemb;
}

void GetHttp(std::string& httpUrl)
{
    CURL* curl = curl_easy_init();

    curl_easy_setopt(curl, CURLOPT_URL, "http://now.qq.com/cgi-bin/third/third_channel/pdd");

    curl_easy_setopt(curl, CURLOPT_HEADERFUNCTION, header_callback);

    curl_easy_setopt(curl, CURLOPT_READFUNCTION, read_callback);

    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_callback);

//    std::cout << "error" << std::endl;
//    std::stringstream  ss;
//    ss << "A: 1\\r\\n"
//       << "B: 2";
//    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, ss.str().c_str());
    std::cout << "error2" << std::endl;

/* pass in custom data to the callback */

    struct my_info my = { 10, "the cookies are in the cupboard" };
    curl_easy_setopt(curl, CURLOPT_HEADERDATA, &my);

    //curl_easy_setopt(curl, CURLOPT_HTTPGET, 1L);

    CURLcode code = curl_easy_perform(curl);
    if (code != CURLE_OK)
    {
        std::cout << "failed to get request" << std::endl;
    }

    int response_code = 0;
    curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &response_code);
    std::cout << response_code << std::endl;
}


