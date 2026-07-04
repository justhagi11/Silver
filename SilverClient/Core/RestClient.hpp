#pragma once
#include "../Includes.hpp"

namespace Silver {
    class RestClient {
    private:
        std::string m_token;

    public:
        RestClient(const std::string& token);
        bool SendChannelMessage(const std::string& channelId, const std::string& content);
        std::string GetChannelMessages(const std::string& channelId);
    };
}