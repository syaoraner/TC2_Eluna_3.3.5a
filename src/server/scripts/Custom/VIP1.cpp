/*
<--------------------------------------------------------------------------->
- Developer(s): Ghostcrawler336
- Complete: 100%
- ScriptName: 'VIP only area'
- Comment: Tested & Working.
<--------------------------------------------------------------------------->
*/
#include "ScriptPCH.h"
 
class Vip_Access: public PlayerScript
{
public:
Vip_Access() : PlayerScript("Vip_Access") {}
 
void OnUpdateZone(Player* player, uint32 /*newZone*/, uint32 /*newArea*/)
{
if (player->GetAreaId() == 1519 && player->GetSession()->GetSecurity() == SEC_PLAYER)
{
player->TeleportTo(0, -13328.414063f, 59.765587f, 24.107542f, 0.581469f);
ChatHandler(player->GetSession()).PSendSysMessage("|cffff6060[Information]:|r You are not allowed to be here, you aren't a VIP!|r!");
}
}
};
 
void AddSC_Vip_Access()
{
new Vip_Access();
}
