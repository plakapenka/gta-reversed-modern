#include <StdInc.h>

#include "./Commands.hpp"
#include <CommandParser/Parser.hpp>

/*!
* Various utility commands
*/

void notsa::script::commands::utility::RegisterHandlers() {
    REGISTER_COMMAND_HANDLER_BEGIN("Utility");
}
