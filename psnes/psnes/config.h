//
// Created by cpasjuste on 29/05/18.
//

#ifndef PSNES_CONFIG_H
#define PSNES_CONFIG_H

#include "c2dui_config.h"

class PSNESConfig : public c2dui::Config {

public:

    PSNESConfig(const std::string &home, int version);

};

#endif //PSNES_CONFIG_H
