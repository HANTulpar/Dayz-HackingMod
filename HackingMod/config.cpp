class CfgPatches
{
	class HackingMod
	{
		requiredVersion=0.1;
		requiredAddons[]={
			"HackingModDefines",
			"DZ_Data"
		};
	};
};

class CfgMods
{
	class HackingMod
	{
		dir="HackingMod";
        name="HackingMod";
        credits="DaemonForge";
        author="DaemonForge";
        authorID="0";
        version="0.1";
        extra=0;
        type="mod";
	    dependencies[]={ "Game", "World", "Mission"};
	    class defs
	    {
			class gameScriptModule
            {
				value = "";
                files[]={
					"HackingMod/scripts/3_Game"
					};
            };
			
			class worldScriptModule
            {
                value="";
                files[]={ 
					"HackingMod/scripts/4_World" 
				};
            };
			
	        class missionScriptModule
            {
                value="";
                files[]={
					"HackingMod/scripts/5_Mission" 
				};
            };
        };
    };
};
class CfgSlots
{
	class Slot_Att_TabletBattery_1
	{
		name = "Att_TabletBattery_1";
		displayName = "Tablet Battery";
		selection = "att_TabletBattery";
		ghostIcon = "batteryd";
	};
	class Slot_Att_TabletBattery_2
	{
		name = "Att_TabletBattery_2";
		displayName = "Tablet Battery";
		selection = "att_TabletBattery";
		ghostIcon = "batteryd";
	};
	class Slot_Att_TabletBattery_3
	{
		name = "Att_TabletBattery_3";
		displayName = "Tablet Battery";
		selection = "att_TabletBattery";
		ghostIcon = "batteryd";
	};
	class Slot_Att_TabletBattery_4
	{
		name = "Att_TabletBattery_4";
		displayName = "Tablet Battery";
		selection = "att_TabletBattery";
		ghostIcon = "batteryd";
	};
	class Slot_Att_TabletBattery_5
	{
		name = "Att_TabletBattery_5";
		displayName = "Tablet Battery";
		selection = "att_TabletBattery";
		ghostIcon = "batteryd";
	};
};
class CfgVehicles
{
	class Container_Base;
	class CombinationLock;
	class Inventory_Base;
	class Battery9V;
		
	class DecoderTablet: Inventory_Base
	{
		scope = 2;
		displayName  = "Decoder Tablet";
		descriptionShort  = "Bir Code Lock ile korunan binalara veya çadırlara sızmak için kullanılan bir Tablet";
		model = "HackingMod\Data\DecoderTablet.p3d";
		itemSize[] = {4,3};
		weight = 800;
		rotationFlags = 1;
		attachments[] = {"Att_TabletBattery_1", "Att_TabletBattery_2", "Att_TabletBattery_3","Att_TabletBattery_4","Att_TabletBattery_5"};
		hiddenSelections[] = 
		{        
			"zbytek",
			"tablet_on",
			"tablef_off",
			"screen",
			"background",
			"backscreen",
			"top"		
		};
		hiddenSelectionsTextures[] = 
		{
			"HackingMod\Data\textures\Tablet_off_co.paa",
			"HackingMod\Data\textures\Tablet_on_co.paa",
			"HackingMod\Data\textures\Tablet_off_co.paa",
			"HackingMod\Data\textures\Tablet_off_co.paa",
			"HackingMod\Data\textures\Tablet_off_co.paa",
			"HackingMod\Data\textures\Tablet_off_co.paa",
			"HackingMod\Data\textures\Tablet_off_co.paa"
			
			
			// added  texture to selection
		};        
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"HackingMod\Data\textures\Tablet_on.rvmat"}},{0.7,{"HackingMod\Data\textures\Tablet_on.rvmat"}},{0.5,{"HackingMod\Data\textures\Tablet_damage.rvmat"}},{0.3,{"HackingMod\Data\textures\Tablet_damage.rvmat"}},{0.0,{"HackingMod\Data\textures\Tablet_destruct.rvmat"}}};
				};
			};
		};
		class AnimationSources
        {
            class top
            {
                source="user";
                animPeriod=1.0;
                initPhase=0;
            };
        };
	};
	class TabletBattery: Battery9V
	{
		scope = 2;
		displayName  = "Tablet Battery";
		descriptionShort  = "Tablet koymak için bir Pil";
		model = "HackingMod\Data\TabletBattery.p3d";
		itemSize[] = {1,1};
		weight = 100;
		rotationFlags = 1;
		inventorySlot[] = {"Att_TabletBattery_1", "Att_TabletBattery_2", "Att_TabletBattery_3","Att_TabletBattery_4","Att_TabletBattery_5"};
		hiddenSelections[] = 
		{        
			"zbytek"
		};
		hiddenSelectionsTextures[] = 
		{
			"HackingMod\Data\textures\Battery_co.paa" 
		};        
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
					healthLevels[] = {{1.0,{"HackingMod\Data\textures\Battery.rvmat"}},{0.7,{"HackingMod\Data\textures\Battery.rvmat"}},{0.5,{"HackingMod\Data\textures\Battery.rvmat"}},{0.3,{"HackingMod\Data\textures\Battery.rvmat"}},{0.0,{"HackingMod\Data\textures\Battery_Ruined.rvmat"}}};
				};
			};
		};
		
	};
};

