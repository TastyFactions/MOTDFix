#include <endstone/color_format.h>
#include <endstone/event/server/server_list_ping_event.h>
#include <endstone/plugin/plugin.h>
#include <memory>
#include <vector>

class MOTDFix : public endstone::Plugin {
public:

	void onServerPingEvent(endstone::ServerListPingEvent& event) {
        event.setMotd("Origins, Factions, Economy And More");
        event.setLevelName("Tasty Factions");
        //Spoofing the port to avoid port mismatch with Proxy <--> Server
        event.setLocalPort(19132);
	}
};
