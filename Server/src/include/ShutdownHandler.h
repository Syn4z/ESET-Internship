#pragma once

#include <string>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/JSON/Parser.h>
#include <Poco/JSON/Object.h>
#include <Poco/Dynamic/Var.h>
#include "../include/DatabaseControls.h"
#include "../include/AdminClient.h"
#include "../include/MongoHandler.h"
#include "../include/DatabaseSingleton.h"
#include "../include/DatabaseHandler.h"
#include <string>
#include <grpcpp/grpcpp.h>


class ShutdownHandler {
public:
    ShutdownHandler(const std::string& requestBody);
    void handleShutdown(Poco::Net::HTTPServerResponse& response) const;
    std::vector<std::string> getIds() const;

private:
    std::string requestBody;
    std::string id;
};