#include <iostream>
#include <fstream>
#include <json.hpp>

int main()
{
    std::fstream camera_config("../camera_config.json");
    if(camera_config.is_open())
    {
        nlohmann::json camera_config_data;
        camera_config >> camera_config_data;
        std::cout << camera_config_data << std::endl;
        camera_config.close();
    }
    else
    {
        std::cout << "Failed to open the camera_config JSON file" << std::endl;
    }

    return 0;
}