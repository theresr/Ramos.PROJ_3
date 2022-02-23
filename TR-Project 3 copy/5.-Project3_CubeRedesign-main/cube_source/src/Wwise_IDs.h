/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Audiokinetic Wwise generated include file. Do not edit.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __WWISE_IDS_H__
#define __WWISE_IDS_H__

#include <AK/SoundEngine/Common/AkTypes.h>

namespace AK
{
    namespace EVENTS
    {
        static const AkUniqueID DCP_ENTER01 = 2245995848U;
        static const AkUniqueID DCP_ENTER02 = 2245995851U;
        static const AkUniqueID DCP_SIGNAL01 = 2829720188U;
        static const AkUniqueID DCP_SIGNAL02 = 2829720191U;
        static const AkUniqueID DEFEATED_OGRE = 427908151U;
        static const AkUniqueID DEFEATED_PLAYER = 3682968165U;
        static const AkUniqueID DEFEATED_RAT = 3952911171U;
        static const AkUniqueID DEFEATED_RHINO = 1278524204U;
        static const AkUniqueID DEFEATED_SLITH = 908277812U;
        static const AkUniqueID END_FIREBALL_MONSTER = 4214542295U;
        static const AkUniqueID FIRE_FIREBALL_MONSTER = 157654016U;
        static const AkUniqueID FIRE_ICEGEM_PLAYER = 2390793602U;
        static const AkUniqueID FIRE_POISONGEM_MONSTER = 4290568846U;
        static const AkUniqueID FIRE_POISONGEM_PLAYER = 1620107411U;
        static const AkUniqueID FIRE_STAFF_PLAYER = 2484024762U;
        static const AkUniqueID FOOT_OGRE = 1532553273U;
        static const AkUniqueID FOOT_PLAYER = 1894362767U;
        static const AkUniqueID FOOT_RHINO = 3826003282U;
        static const AkUniqueID FOOT_SLITH = 3877293442U;
        static const AkUniqueID GRUNT_OGRE = 2202981293U;
        static const AkUniqueID GRUNT_RHINO = 436652326U;
        static const AkUniqueID GRUNT_SLITH = 401958326U;
        static const AkUniqueID HIT_FIREBALL_MONSTER = 1110865203U;
        static const AkUniqueID ITEMMAGIC = 2521139513U;
        static const AkUniqueID JUMP = 3833651337U;
        static const AkUniqueID LAND = 674522502U;
        static const AkUniqueID MAP_LOADED = 1758594367U;
        static const AkUniqueID PAIN = 1996139369U;
        static const AkUniqueID PAIN_OGRE = 2465710861U;
        static const AkUniqueID PAIN_RHINO = 87064326U;
        static const AkUniqueID PAIN_SLITH = 52370326U;
        static const AkUniqueID RUMBLE = 157639802U;
        static const AkUniqueID SPAWN_MONSTER = 779629997U;
        static const AkUniqueID SPAWN_PLAYER = 1379053034U;
        static const AkUniqueID SPLASHIN_PLAYER = 3954482959U;
        static const AkUniqueID SPLASHOUT_PLAYER = 3877942876U;
    } // namespace EVENTS

    namespace STATES
    {
        namespace MUSIC_STATE
        {
            static const AkUniqueID GROUP = 3826569560U;

            namespace STATE
            {
                static const AkUniqueID BOSS = 1560169506U;
                static const AkUniqueID GAMEPLAY = 89505537U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID STORY = 1686739444U;
                static const AkUniqueID VICTORY = 2716678721U;
            } // namespace STATE
        } // namespace MUSIC_STATE

        namespace PLAYERINWATER
        {
            static const AkUniqueID GROUP = 481714212U;

            namespace STATE
            {
                static const AkUniqueID NO = 1668749452U;
                static const AkUniqueID NONE = 748895195U;
                static const AkUniqueID YES = 979470758U;
            } // namespace STATE
        } // namespace PLAYERINWATER

        namespace PLAYERLIFE
        {
            static const AkUniqueID GROUP = 444815956U;

            namespace STATE
            {
                static const AkUniqueID ALIVE = 655265632U;
                static const AkUniqueID DEFEATED = 2791675679U;
                static const AkUniqueID NONE = 748895195U;
            } // namespace STATE
        } // namespace PLAYERLIFE

    } // namespace STATES

    namespace SWITCHES
    {
        namespace FOOT
        {
            static const AkUniqueID GROUP = 3031504797U;

            namespace SWITCH
            {
                static const AkUniqueID LEFT = 4109362U;
                static const AkUniqueID RIGHT = 3893817417U;
            } // namespace SWITCH
        } // namespace FOOT

        namespace GAMEPLAY_SWITCH
        {
            static const AkUniqueID GROUP = 2702523344U;

            namespace SWITCH
            {
                static const AkUniqueID COMBAT = 2764240573U;
                static const AkUniqueID EXPLORE = 579523862U;
            } // namespace SWITCH
        } // namespace GAMEPLAY_SWITCH

        namespace HEALTH_STATUS
        {
            static const AkUniqueID GROUP = 2224580244U;

            namespace SWITCH
            {
                static const AkUniqueID BADLY_INJURED = 1736617117U;
                static const AkUniqueID FLESH_WOUND = 3519121093U;
                static const AkUniqueID HEALTHY = 2874639328U;
                static const AkUniqueID NEARLY_DEFEATED = 1898225071U;
            } // namespace SWITCH
        } // namespace HEALTH_STATUS

        namespace MATERIAL
        {
            static const AkUniqueID GROUP = 3865314626U;

            namespace SWITCH
            {
                static const AkUniqueID METAL = 2473969246U;
                static const AkUniqueID SAND = 803837735U;
                static const AkUniqueID TILE = 2637588553U;
            } // namespace SWITCH
        } // namespace MATERIAL

    } // namespace SWITCHES

    namespace GAME_PARAMETERS
    {
        static const AkUniqueID ENEMYAWARE = 3963624107U;
        static const AkUniqueID MUSICVOLUME = 2346531308U;
        static const AkUniqueID PLAYERHEALTH = 151362964U;
        static const AkUniqueID SFXVOLUME = 988953028U;
        static const AkUniqueID STINGER_SIDECHAIN = 4122641472U;
        static const AkUniqueID VOICEVOLUME = 414646191U;
    } // namespace GAME_PARAMETERS

    namespace TRIGGERS
    {
        static const AkUniqueID CYMBAL_SWELL = 2077047193U;
        static const AkUniqueID HEALTH_CUE = 3371734183U;
    } // namespace TRIGGERS

    namespace BANKS
    {
        static const AkUniqueID INIT = 1355168291U;
        static const AkUniqueID DCP_THE_CORE = 2981918260U;
        static const AkUniqueID MAIN = 3161908922U;
    } // namespace BANKS

    namespace BUSSES
    {
        static const AkUniqueID _201_MAIN = 2554360235U;
        static const AkUniqueID _201_STINGERS = 526254837U;
        static const AkUniqueID BOSS = 1560169506U;
        static const AkUniqueID BOSS_SYNTHS = 498858591U;
        static const AkUniqueID COMBAT = 2764240573U;
        static const AkUniqueID DEFEATED = 2791675679U;
        static const AkUniqueID ENVIRONMENTAL = 1973600711U;
        static const AkUniqueID ENVIRONMENTS = 3761286811U;
        static const AkUniqueID EXPLORE = 579523862U;
        static const AkUniqueID ITEMS = 2151963051U;
        static const AkUniqueID MAGIC = 1880439950U;
        static const AkUniqueID MAIN_CHARACTER = 3381091279U;
        static const AkUniqueID MASTER_AUDIO_BUS = 3803692087U;
        static const AkUniqueID MASTER_SECONDARY_BUS = 805203703U;
        static const AkUniqueID MONSTERS = 3858746980U;
        static const AkUniqueID MUSIC = 3991942870U;
        static const AkUniqueID SFX = 393239870U;
        static const AkUniqueID STORY = 1686739444U;
        static const AkUniqueID VICTORY = 2716678721U;
        static const AkUniqueID VOICE = 3170124113U;
        static const AkUniqueID WWISE_201_MUSIC = 204612474U;
    } // namespace BUSSES

    namespace AUX_BUSSES
    {
        static const AkUniqueID ENV_CORRIDOR = 194525819U;
        static const AkUniqueID ENV_LARGE_ROOM = 3877888880U;
        static const AkUniqueID ENV_MEDIUM_ROOM = 4102571502U;
        static const AkUniqueID ENV_SMALL_ROOM = 783969252U;
    } // namespace AUX_BUSSES

    namespace AUDIO_DEVICES
    {
        static const AkUniqueID NO_OUTPUT = 2317455096U;
        static const AkUniqueID SYSTEM = 3859886410U;
    } // namespace AUDIO_DEVICES

}// namespace AK

#endif // __WWISE_IDS_H__
