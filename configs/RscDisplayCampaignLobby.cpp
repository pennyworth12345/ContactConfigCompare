class RscDisplayCampaignLobby
{
	closeOnMissionEnd = 1;
	idd = 50000;
	name = "RscDisplayCampaignLobby";
	onLoad = "[_this, ""RscDisplayCampaignLobby""]	call BIS_fnc_EXP_camp_lobby_onLoad";
	onUnLoad = "[_this, ""RscDisplayCampaignLobby""]	call BIS_fnc_EXP_camp_lobby_onUnLoad";
	simulationEnabled = 1;
	class Controls
	{
		class CampaignLobbyMainGroup: RscControlsGroup
		{
			h = "safeZoneH";
			idc = 53000;
			show = 0;
			w = "safeZoneW";
			x = "safeZoneX";
			y = "safeZoneY";
			class Controls
			{
				class CampaignLobbyAccessKeyGroup: RscControlsGroup
				{
					h = "(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2)))";
					idc = 54200;
					w = "(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5)) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 8))";
					x = "(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)))";
					y = "(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 											(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25))) - 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2))))";
					class Controls
					{
						class CampaignLobbyAccessKeyCircle01: CampaignLobbyAccessKeyIcon
						{
							colorBackground[] = {1, 1, 1, 1};
							colorText[] = {0.901961, 0.172549, 0.2, 1};
							idc = 54203;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_login_circle01_ca.paa";
						};
						class CampaignLobbyAccessKeyCircle02: CampaignLobbyAccessKeyIcon
						{
							colorBackground[] = {1, 1, 1, 1};
							colorText[] = {0, 0.776471, 1, 1};
							idc = 54204;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_login_circle02_ca.paa";
						};
						class CampaignLobbyAccessKeyIcon: RscPictureKeepAspect
						{
							colorBackground[] = {1, 1, 1, 1};
							colorText[] = {0, 0.776471, 1, 1};
							h = "(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))";
							idc = 54202;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_login_key_ca.paa";
							w = "(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5))";
							x = 0;
							y = 0;
						};
						class CampaignLobbyAccessKeyLevel: RscText
						{
							colorBackground[] = {0, 0, 0, 0};
							colorText[] = {0, 0.776471, 1, 0.466667};
							font = "PuristaMedium";
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.5)";
							idc = 54205;
							shadow = 0;
							sizeEx = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.5) * 0.5";
							style = 0;
							text = "Access Level";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 8)";
							x = "(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5)) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))";
							y = "(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) * 0.5 - 										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.125 - 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.5) * 0.5)";
						};
						class CampaignLobbyAccessKeyMainLine: RscText
						{
							colorBackground[] = {0, 0.776471, 1, 1};
							colorText[] = {0, 0, 0, 0};
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2))";
							idc = 54201;
							w = "(pixelW)";
							x = "(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5)) * 0.5)";
							y = "(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)))";
						};
					};
				};
				class CampaignLobbyCTRGTreeHeaderGroup: RscControlsGroup
				{
					h = "(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)))";
					idc = 53200;
					w = "(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) + 							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25) * 1.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 15))";
					x = "(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)))";
					y = "(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)))";
					class Controls
					{
						class CampaignLobbyCTRGTreeHeader01: RscText
						{
							colorBackground[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 1};
							font = "PuristaMedium";
							h = "(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))";
							idc = 53203;
							sizeEx = "(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.875)";
							text = "CTRG";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 5)";
							x = "(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) + 							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25) * 1.5))";
							y = "(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5 - 								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) * 0.5 - 										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.125)";
						};
						class CampaignLobbyCTRGTreeHeader02: CampaignLobbyCTRGTreeHeader01
						{
							colorText[] = {1, 1, 1, 0.466667};
							font = "PuristaLight";
							idc = 53204;
							sizeEx = "(			(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.875))";
							text = "CTRGCENTRAL";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 15)";
							x = "(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) + 							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25) * 1.5)))";
						};
						class CampaignLobbyCTRGTreeLogo: RscPicture
						{
							colorBackground[] = {1, 1, 1, 1};
							colorText[] = {1, 1, 1, 1};
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)";
							idc = 53202;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_ctrg_tree_logo_ca.paa";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5)";
							x = "(0)";
							y = "(0)";
						};
						class CampaignLobbyCTRGTreeLogoBackground: RscText
						{
							colorBackground[] = {0.901961, 0.172549, 0.2, 1};
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)";
							idc = 53201;
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5)";
							x = "(0)";
							y = "(0)";
						};
					};
				};
				class CampaignLobbyCTRGTreeOptionCoreGroup: RscControlsGroup
				{
					h = "(								(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1))) - 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) - 											(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25))) - 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2))) - pixelH)  - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1))";
					idc = 53400;
					w = "(								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9))";
					x = "(								(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1))))";
					y = "(								(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)))) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1))";
					class Controls {};
				};
				class CampaignLobbyCTRGTreeStructureGroup: RscControlsGroup
				{
					h = "(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1))) - 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) - 											(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25))) - 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2))) - pixelH)";
					idc = 53300;
					w = "(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5))";
					x = "(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)))";
					y = "(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))))";
					class Controls
					{
						class CampaignLobbyCTRGTreeStructureBackground: RscText
						{
							colorBackground[] = {0.901961, 0.172549, 0.2, 0};
							colorText[] = {0, 0, 0, 0};
							h = "(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1))) - 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) - 											(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25))) - 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2))) - pixelH)";
							idc = 53301;
							w = "(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5))";
							x = 0;
							y = 0;
						};
						class CampaignLobbyCTRGTreeStructureLineMain01: RscText
						{
							colorBackground[] = {0.901961, 0.172549, 0.2, 1};
							colorText[] = {0, 0, 0, 0};
							h = "(								(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1))) - 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) - 											(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25))) - 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2))) - pixelH) )";
							idc = 53302;
							w = "(pixelW)";
							x = "(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5)";
							y = "(0)";
						};
					};
				};
				class CampaignLobbyLoginGroup: RscControlsGroup
				{
					h = "(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25)))";
					idc = 54100;
					w = "(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 5) + 								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5 + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 5)))";
					x = "(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)))";
					y = "(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 											(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25))))";
					class Controls
					{
						class CampaignLobbyLoginPassword: CampaignLobbyLoginUsername
						{
							colorBackground[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.72549};
							font = "PuristaMedium";
							h = "(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) - pixelH)";
							idc = 54103;
							text = "Password";
							y = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25)";
						};
						class CampaignLobbyLoginPasswordEdit: CampaignLobbyLoginPassword
						{
							colorBackground[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.72549};
							font = "PuristaSemibold";
							idc = 54104;
							style = 0;
							text = "* * * * * * * *";
							x = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 5)";
						};
						class CampaignLobbyLoginUsername: RscText
						{
							colorBackground[] = {0, 0.776471, 1, 1};
							colorText[] = {0, 0, 0, 1};
							font = "PuristaLight";
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25)";
							idc = 54101;
							shadow = 0;
							sizeEx = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) * 0.5";
							style = 1;
							text = "Username";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 5)";
							x = 0;
							y = 0;
						};
						class CampaignLobbyLoginUsernameEdit: CampaignLobbyLoginUsername
						{
							colorBackground[] = {0, 0, 0, 0.231373};
							colorText[] = {1, 1, 1, 0.72549};
							h = "(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25))";
							idc = 54102;
							style = 0;
							text = "ENDSTAR";
							w = "(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5 + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 5))";
							x = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 5)";
						};
					};
				};
				class CampaignLobbyMissionGroup: RscControlsGroup
				{
					h = "(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 										(								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25))";
					idc = 54300;
					w = "(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25)))";
					x = "(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))";
					y = "(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1))";
					class Controls
					{
						class CampaignLobbyMissionIntelGroup: RscControlsGroup
						{
							h = "(							(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2)) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.75) + 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25))";
							idc = 54500;
							w = "(							(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25)))))";
							x = "(0)";
							y = "(0)";
							class Controls
							{
								class CampaignLobbyMissionIntel: RscStructuredText
								{
									colorBackground[] = {0, 0, 0, 0};
									colorText[] = {1, 1, 1, 0.72549};
									h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.75)";
									idc = 54503;
									shadow = 1;
									size = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.75)";
									style = 0;
									text = "";
									w = "(									(							(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))))))";
									x = "(0)";
									y = "(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2))";
									class Attributes
									{
										font = "PuristaMedium";
									};
								};
								class CampaignLobbyMissionIntelBackground: RscText
								{
									colorBackground[] = {0, 0, 0, 0.776471};
									colorText[] = {0, 0, 0, 1};
									h = "(									(							(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2)) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.75) + 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25)))";
									idc = 54501;
									text = "";
									w = "(									(							(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))))))";
									x = "(0)";
									y = "(0)";
								};
								class CampaignLobbyMissionIntelStatus: CampaignLobbyMissionIntelTitle
								{
									colorBackground[] = {1, 1, 1, 0};
									colorText[] = {0, 0.776471, 1, 1};
									font = "PuristaMedium";
									idc = 54504;
									shadow = 1;
									sizeEx = "(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2) * 0.75)";
									style = 1;
									text = "";
								};
								class CampaignLobbyMissionIntelTitle: RscText
								{
									colorBackground[] = {1, 1, 1, 0};
									colorText[] = {1, 1, 1, 0.466667};
									font = "PuristaSemibold";
									h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2)";
									idc = 54502;
									shadow = 1;
									sizeEx = "(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2))";
									style = 0;
									text = "";
									w = "(									(							(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))))))";
									x = "(0)";
									y = "(0)";
								};
							};
						};
						class CampaignLobbyMissionOverlay: RscControlsGroup
						{
							h = "(							(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 										(								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25))))";
							idc = 54600;
							w = "(							(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25)))))";
							x = "(							(0))";
							y = "(							(0))";
							class Controls
							{
								class CampaignLobbyMissionOverlayBottomLine: CampaignLobbyMissionOverlayTopLine
								{
									colorBackground[] = {0.12549, 0.12549, 0.12549, 1};
									idc = 54602;
									y = "(								(							(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 										(								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25)))) - 						(pixelH))";
								};
								class CampaignLobbyMissionOverlayComplete: RscTextNoShadow
								{
									colorBackground[] = {0, 0, 0, 1};
									colorText[] = {1, 1, 1, 1};
									font = "PuristaSemibold";
									h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)";
									idc = 54605;
									sizeEx = "(						(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 0.75)";
									text = "Completed";
									w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 6)";
									x = 0;
									y = 0;
								};
								class CampaignLobbyMissionOverlayLeftLine: CampaignLobbyMissionOverlayTopLine
								{
									h = "(								(							(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 										(								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25)))) - 						(pixelH) * 2)";
									idc = 54603;
									w = "(pixelW)";
									y = "(						(pixelH))";
								};
								class CampaignLobbyMissionOverlayRightLine: CampaignLobbyMissionOverlayLeftLine
								{
									idc = 54604;
									x = "(								(							(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))))) - 						(pixelW))";
								};
								class CampaignLobbyMissionOverlayTopLine: RscText
								{
									colorBackground[] = {0, 0, 0, 1};
									colorText[] = {0, 0, 0, 0};
									h = "(pixelH)";
									idc = 54601;
									w = "(								(							(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))))))";
									x = "(0)";
									y = "(0)";
								};
								class CampaignLobbyMissionOverlayTrigger: RscButtonNoColor
								{
									h = "(							(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25)))))";
									idc = 54606;
									onbuttonclick = "[_this select 0, 0] call BIS_fnc_EXP_camp_lobby_UIOverlayManager";
									onMouseEnter = "[_this select 0, 1] call BIS_fnc_EXP_camp_lobby_UIOverlayManager";
									onMouseExit = "[_this select 0, 2] call BIS_fnc_EXP_camp_lobby_UIOverlayManager";
									w = "(							(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 										(								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25))))";
									x = 0;
									y = 0;
								};
							};
						};
						class CampaignLobbyMissionPlayerGroup: RscControlsGroup
						{
							h = "(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 										(								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25)))";
							idc = 55000;
							w = "(							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9))";
							x = "(0)";
							y = "(0)";
							class Controls {};
						};
						class CampaignLobbyMissionVideoGroup: RscControlsGroup
						{
							h = "(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 										(								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25)))";
							idc = 54400;
							w = "(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))))";
							x = "(0)";
							y = "(0)";
							class Controls
							{
								class CampaignLobbyMissionVideoBackground: RscText
								{
									colorBackground[] = {0, 0, 0, 1};
									colorText[] = {0, 0, 0, 0};
									h = "(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 										(								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25)))";
									idc = 54401;
									w = "(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))))";
									x = 0;
									y = 0;
								};
							};
						};
					};
				};
				class CampaignLobbyOverlayGroup: RscControlsGroup
				{
					h = "(safeZoneH)";
					idc = 57000;
					w = "(safeZoneW)";
					x = 0;
					y = 0;
					class Controls
					{
						class CampaignLobbyOverlay: RscButtonNoColor
						{
							h = "(										(safeZoneH))";
							idc = 57001;
							w = "(										(safeZoneW))";
							x = 0;
							y = 0;
						};
					};
				};
				class CampaignLobbyProgressGroup: RscControlsGroup
				{
					h = "(								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))";
					idc = 56000;
					w = "(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))))";
					x = "(									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25)))";
					y = "(											(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 											(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25)))))";
					class Controls
					{
						class CampaignLobbyProgressApproveMissionButton: CampaignLobbyProgressLogOutButton
						{
							idc = 56004;
							x = "(										(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25)))) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 12 - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25)))";
						};
						class CampaignLobbyProgressLogOutButton: RscButtonNoColor
						{
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)";
							idc = 56002;
							onbuttonclick = "[_this select 0, 0] call BIS_fnc_EXP_camp_lobby_UIProgressManager";
							onMouseEnter = "[_this select 0, 1] call BIS_fnc_EXP_camp_lobby_UIProgressManager";
							onMouseExit = "[_this select 0, 2] call BIS_fnc_EXP_camp_lobby_UIProgressManager";
							soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick", 0.09, 1};
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 12 - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))";
							x = 0;
							y = 0;
						};
						class CampaignLobbyProgressLogOutText: RscText
						{
							colorBackground[] = {1, 1, 1, 0.466667};
							colorText[] = {0, 0, 0, 1};
							font = "PuristaMedium";
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)";
							idc = 56001;
							shadow = 0;
							sizeEx = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 								(1.5)) * 0.5";
							style = 2;
							text = "Log Out";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 12 - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))";
							x = 0;
							y = 0;
						};
						class CampaignLoggyProgressApproveMissionText: CampaignLobbyProgressLogOutText
						{
							colorBackground[] = {0, 1, 0.564706, 0.466667};
							colorText[] = {0, 0, 0, 1};
							idc = 56003;
							text = "Approve Mission";
							x = "(										(									(						(safeZoneW - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) - 									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)) + 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 9) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25)))) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 12 - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25)))";
						};
					};
				};
				class CampaignLobbyTabletButtonGroup: RscControlsGroup
				{
					h = "(								(										(safeZoneH) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2))";
					idc = 52100;
					w = "(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - pixelW)";
					x = "(								(										(safeZoneW) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5)))";
					y = "(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.5)";
					class Controls
					{
						class CampaignLobbyTabletButtonRespawnGroup: CampaignLobbyTabletButtonSearchGroup
						{
							idc = 52400;
							y = "(0) + 							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2) * 2 + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25)";
							class Controls: Controls
							{
								class CampaignLobbyTabletButton: CampaignLobbyTabletButton
								{
									idc = 52404;
									tooltip = "Set number of respawns for players";
								};
								class CampaignLobbyTabletButtonImage: CampaignLobbyTabletButtonImage
								{
									colorText[] = {0.266667, 0.266667, 0.227451, 1};
									idc = 52401;
									text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_button_respawn02_ca.paa";
								};
								class CampaignLobbyTabletButtonMode: CampaignLobbyTabletButtonMode
								{
									idc = 52403;
									text = "";
								};
								class CampaignLobbyTabletButtonTitle: CampaignLobbyTabletButtonTitle
								{
									idc = 52402;
									text = "";
								};
							};
						};
						class CampaignLobbyTabletButtonReviveGroup: CampaignLobbyTabletButtonSearchGroup
						{
							idc = 52500;
							y = "(0) + 							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2) * 3 + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25)";
							class Controls: Controls
							{
								class CampaignLobbyTabletButton: CampaignLobbyTabletButton
								{
									idc = 52504;
									tooltip = "Set requirements to revive players";
								};
								class CampaignLobbyTabletButtonImage: CampaignLobbyTabletButtonImage
								{
									colorText[] = {0.266667, 0.266667, 0.227451, 1};
									idc = 52501;
									text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_button_revive02_ca.paa";
								};
								class CampaignLobbyTabletButtonMode: CampaignLobbyTabletButtonMode
								{
									idc = 52503;
									text = "";
								};
								class CampaignLobbyTabletButtonTitle: CampaignLobbyTabletButtonTitle
								{
									idc = 52502;
									text = "";
								};
							};
						};
						class CampaignLobbyTabletButtonSearchGroup: RscControlsGroup
						{
							h = "(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2)";
							idc = 52200;
							w = "(							(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - pixelW))";
							x = "(0)";
							y = "(0)";
							class Controls
							{
								class CampaignLobbyTabletButton: RscButtonNoColor
								{
									h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3)";
									idc = 52204;
									onbuttonclick = "[_this select 0, 0] call BIS_fnc_EXP_camp_lobby_UISettingsManager";
									onMouseEnter = "[_this select 0, 1] call BIS_fnc_EXP_camp_lobby_UISettingsManager";
									onMouseExit = "[_this select 0, 2] call BIS_fnc_EXP_camp_lobby_UISettingsManager";
									soundClick[] = {"\A3\ui_f\data\sound\ReadOut\readoutHideClick1", 4, 1};
									soundEnter[] = {"\A3\ui_f\data\sound\ReadOut\readoutHideClick2", 0.75, 1};
									w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 3)";
									x = "(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) * 0.5 - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 3) * 0.5 + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) * 0.25)";
									y = "(0)";
								};
								class CampaignLobbyTabletButtonImage: RscPicture
								{
									colorBackground[] = {0, 0, 0, 0};
									colorText[] = {0.266667, 0.266667, 0.227451, 1};
									h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3)";
									idc = 52201;
									text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_button_search_ca.paa";
									w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 3)";
									x = "(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) * 0.5 - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 3) * 0.5 + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) * 0.25)";
									y = "(0)";
								};
								class CampaignLobbyTabletButtonLine: RscText
								{
									colorBackground[] = {0.266667, 0.266667, 0.227451, 0.231373};
									h = "(pixelH)";
									idc = 52205;
									w = "(							(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - pixelW) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) * 1.25)";
									x = "(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) * 0.5)";
									y = "(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.5)";
								};
								class CampaignLobbyTabletButtonMode: CampaignLobbyTabletButtonTitle
								{
									font = "PuristaMedium";
									idc = 52203;
									sizeEx = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.875)";
									y = "(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3)) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 0.75";
								};
								class CampaignLobbyTabletButtonTitle: RscText
								{
									colorBackground[] = {0, 0, 0, 0};
									colorText[] = {1, 1, 1, 1};
									font = "PuristaMedium";
									h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)";
									idc = 52202;
									sizeEx = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.875)";
									style = 2;
									text = "";
									w = "(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5))";
									x = "(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) * 0.25)";
									y = "(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3))";
								};
							};
						};
						class CampaignLobbyTabletButtonSettingsGroup: CampaignLobbyTabletButtonSearchGroup
						{
							idc = 52300;
							y = "(0) + 							(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2) * 1";
							class Controls: Controls
							{
								class CampaignLobbyTabletButton: CampaignLobbyTabletButton
								{
									idc = 52304;
									tooltip = "Resets mission settings based on current difficulty";
								};
								class CampaignLobbyTabletButtonImage: CampaignLobbyTabletButtonImage
								{
									colorText[] = {1, 1, 1, 0.231373};
									idc = 52301;
									text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_button_settings_ca.paa";
								};
								class CampaignLobbyTabletButtonMode: CampaignLobbyTabletButtonMode
								{
									colorText[] = {1, 1, 1, 0.466667};
									idc = 52303;
									text = "";
								};
								class CampaignLobbyTabletButtonTitle: CampaignLobbyTabletButtonTitle
								{
									colorText[] = {1, 1, 1, 0.466667};
									idc = 52302;
									text = "";
								};
							};
						};
					};
				};
				class CampaignLobbyTabletMilitaryGroup: RscControlsGroup
				{
					h = "(						(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2)";
					idc = 52600;
					w = "(							(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - pixelW))";
					x = "(								(										(safeZoneW) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5)))";
					y = "(											(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 											(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25)))) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5) * 0.5 - 						(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3) * 0.5 - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2)";
					class Controls
					{
						class CampaignLobbyTabletMilitaryEfficiency: CampaignLobbyTabletMilitaryTitle
						{
							colorText[] = {1, 1, 1, 0.466667};
							font = "PuristaMedium";
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)";
							idc = 52603;
							text = "";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2)";
							x = "(						(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) * 0.5 - 						(										(pixelW * 										(pixelGridNoUIScale) * 2) * 3) * 0.5 + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) * 0.25) + 						(										(pixelW * 										(pixelGridNoUIScale) * 2) * 3) * 0.5 - 					(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2) * 0.5)";
							y = "(						(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2) + 						(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3) * 0.5 - 					(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 0.5)";
						};
						class CampaignLobbyTabletMilitaryMode: CampaignLobbyTabletMilitaryTitle
						{
							font = "PuristaMedium";
							idc = 52602;
							sizeEx = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.875)";
							text = "";
							y = "(0) + 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 0.75";
						};
						class CampaignLobbyTabletMilitaryRadialLeft: CampaignLobbyTabletMilitaryRadialLeftBaseBG
						{
							colorText[] = {0, 1, 0.564706, 0};
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3)";
							idc = 52606;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_radial_left_ca.paa";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 3)";
							x = "(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) * 0.5 - 						(										(pixelW * 										(pixelGridNoUIScale) * 2) * 3) * 0.5 + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) * 0.25)";
							y = "(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2)";
						};
						class CampaignLobbyTabletMilitaryRadialLeftBaseBG: RscPicture
						{
							angle = 0;
							centerU = 0.5;
							centerV = 0.5;
							colorBackground[] = {0, 0, 0, 0};
							colorText[] = {0.266667, 0.266667, 0.227451, 1};
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 3)";
							idc = 52604;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_radial_left_bg_ca.paa";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 3)";
							x = "(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) * 0.5 - 						(										(pixelW * 										(pixelGridNoUIScale) * 2) * 3) * 0.5 + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) * 0.25)";
							y = "(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2)";
						};
						class CampaignLobbyTabletMilitaryRadialLeftBG: CampaignLobbyTabletMilitaryRadialLeftBaseBG
						{
							colorText[] = {0.266667, 0.266667, 0.227451, 1};
							idc = 52607;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_radial_left_bg_ca.paa";
						};
						class CampaignLobbyTabletMilitaryRadialRight: CampaignLobbyTabletMilitaryRadialLeftBaseBG
						{
							angle = 180;
							colorText[] = {0, 1, 0.564706, 0};
							idc = 52608;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_radial_left_ca.paa";
						};
						class CampaignLobbyTabletMilitaryRadialRightBaseBG: CampaignLobbyTabletMilitaryRadialLeftBaseBG
						{
							angle = 180;
							idc = 52605;
						};
						class CampaignLobbyTabletMilitaryTitle: RscText
						{
							colorBackground[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 0.231373};
							font = "PuristaMedium";
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)";
							idc = 52601;
							sizeEx = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.875)";
							style = 2;
							text = "";
							w = "(							(								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5)))";
							x = "(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) * 0.25)";
							y = "(0)";
						};
					};
				};
			};
		};
	};
	class ControlsBackground
	{
		class CampaignLobbyBackgroundFullGroup: RscControlsGroup
		{
			h = "safeZoneH";
			idc = 51000;
			w = "safeZoneWAbs";
			x = "safeZoneXAbs";
			y = "safeZoneY";
			class Controls
			{
				class CampaignLobbyBackgroundFull: RscText
				{
					colorBackground[] = {0, 0, 0, 1};
					colorText[] = {0, 0, 0, 1};
					h = "safeZoneH";
					idc = 51001;
					text = "";
					w = "safeZoneWAbs";
					x = 0;
					y = 0;
				};
			};
		};
		class CampaignLobbyBackgroundGroup: RscControlsGroup
		{
			h = "safeZoneH";
			idc = 51100;
			show = 0;
			w = "safeZoneW";
			x = "safeZoneX";
			y = "safeZoneY";
			class Controls
			{
				class CampaignLobbyBackground: RscPicture
				{
					colorBackground[] = {1, 1, 1, 1};
					colorText[] = {1, 1, 1, 1};
					h = "safeZoneH";
					idc = 51101;
					text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_co.paa";
					w = "safeZoneW";
					x = 0;
					y = 0;
				};
				class CampaignLobbyBackground2: CampaignLobbyBackground
				{
					idc = 51102;
					text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background2_co.paa";
				};
				class CampaignLobbyBackgroundBorder: RscControlsGroup
				{
					h = "safeZoneH";
					idc = 51300;
					w = "safeZoneW";
					x = 0;
					y = 0;
					class Controls
					{
						class CampaignLobbyBackgroundCornerBottomLeftH: CampaignLobbyBackgroundCornerTopLeftH
						{
							idc = 51306;
							y = "safeZoneH - (										(pixelH * 										(pixelGridNoUIScale) * 2) * 2) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 4)";
						};
						class CampaignLobbyBackgroundCornerBottomLeftW: CampaignLobbyBackgroundCornerTopLeftW
						{
							idc = 51305;
							y = "safeZoneH - (										(pixelH * 										(pixelGridNoUIScale) * 2) * 2) - (									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25))";
						};
						class CampaignLobbyBackgroundCornerBottomRightH: CampaignLobbyBackgroundCornerBottomLeftH
						{
							idc = 51308;
							x = "safeZoneW - (										(pixelW * 										(pixelGridNoUIScale) * 2) * 2) - (									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))";
						};
						class CampaignLobbyBackgroundCornerBottomRightW: CampaignLobbyBackgroundCornerBottomLeftW
						{
							idc = 51307;
							x = "safeZoneW - (										(pixelW * 										(pixelGridNoUIScale) * 2) * 2) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4)";
						};
						class CampaignLobbyBackgroundCornerTopLeftH: CampaignLobbyBackgroundCornerTopLeftW
						{
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 4) - (									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25))";
							idc = 51302;
							w = "(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))";
							y = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2) + (									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25))";
						};
						class CampaignLobbyBackgroundCornerTopLeftW: RscText
						{
							colorBackground[] = {1, 1, 1, 0.231373};
							colorText[] = {0, 0, 0, 0};
							h = "(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25))";
							idc = 51301;
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4)";
							x = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2)";
							y = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2)";
						};
						class CampaignLobbyBackgroundCornerTopRightH: CampaignLobbyBackgroundCornerTopLeftH
						{
							idc = 51304;
							x = "safeZoneW - (										(pixelW * 										(pixelGridNoUIScale) * 2) * 2) - (									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))";
						};
						class CampaignLobbyBackgroundCornerTopRightW: CampaignLobbyBackgroundCornerTopLeftW
						{
							idc = 51303;
							x = "safeZoneW - (										(pixelW * 										(pixelGridNoUIScale) * 2) * 2) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4)";
						};
					};
				};
				class CampaignLobbyBackgroundLoadingBarGroup: RscControlsGroup
				{
					h = "(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2) + 									(pixelH) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 0.25)))";
					idc = 51200;
					w = "(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 10))";
					x = "(									(							(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) + 							(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1))) + 								(										(										(pixelW * 										(pixelGridNoUIScale) * 2) * 2.5)) + 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 0.25))";
					y = "(									(						(safeZoneH - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) - 							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)) - 											(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25) + 								(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1.25))) - 									(								(										(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2.5)) + 								(										(pixelH * 										(pixelGridNoUIScale) * 2)))))";
					class Controls
					{
						class CampaignLobbyBackgroundLoadingBar01: RscText
						{
							colorBackground[] = {1, 1, 1, 1};
							colorText[] = {1, 1, 1, 1};
							h = "(pixelH)";
							idc = 51202;
							text = "";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 10)";
							x = "(0)";
							y = "(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2))";
						};
						class CampaignLobbyBackgroundLoadingBar02: CampaignLobbyBackgroundLoadingBar01
						{
							colorBackground[] = {0.901961, 0.172549, 0.2, 1};
							idc = 51203;
						};
						class CampaignLobbyBackgroundLoadingText: RscText
						{
							colorBackground[] = {0, 0, 0, 0};
							colorText[] = {1, 1, 1, 1};
							font = "PuristaLight";
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2)";
							idc = 51201;
							sizeEx = "(							(										(pixelH * 										(pixelGridNoUIScale) * 2) * 2) * 0.75)";
							style = 0;
							text = "";
							w = "(									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 10))";
							x = "(0)";
							y = "(0)";
						};
					};
				};
				class CampaignLobbyTablet: RscControlsGroup
				{
					h = "(safeZoneH)";
					idc = 52000;
					w = "(safeZoneW)";
					x = "(0)";
					y = "(0)";
					class Controls
					{
						class CampaignLobbyBackgroundTabletBorderBottom: CampaignLobbyBackgroundTabletBorderTop
						{
							idc = 52011;
							y = "(safeZoneH) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)";
						};
						class CampaignLobbyBackgroundTabletBorderLeft: CampaignLobbyBackgroundTabletBorderTop
						{
							h = "(safeZoneH) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2 - 								(pixelH * 2)";
							idc = 52012;
							w = "(pixelW * 2)";
							x = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)";
							y = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) + 								(pixelH * 2)";
						};
						class CampaignLobbyBackgroundTabletBorderRight: CampaignLobbyBackgroundTabletBorderLeft
						{
							idc = 52013;
							x = "(safeZoneW) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5) - 								(pixelW * 2)";
						};
						class CampaignLobbyBackgroundTabletBorderTop: RscText
						{
							colorBackground[] = {0, 0, 0, 1};
							colorText[] = {0, 0, 0, 1};
							h = "(pixelH * 2)";
							idc = 52010;
							text = "";
							w = "(safeZoneW) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) * 2 - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5)";
							x = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)";
							y = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)";
						};
						class CampaignLobbyBackgroundTabletBottom: CampaignLobbyBackgroundTabletTop
						{
							idc = 52002;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_bottom_co.paa";
							x = 0;
							y = "(safeZoneH) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)";
						};
						class CampaignLobbyBackgroundTabletBottomLeft: CampaignLobbyBackgroundTabletTopLeft
						{
							idc = 52007;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_bottomleftcorner_co.paa";
							y = "(safeZoneH) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)";
						};
						class CampaignLobbyBackgroundTabletBottomRight: CampaignLobbyBackgroundTabletBottomLeft
						{
							idc = 52008;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_bottomrightcorner_co.paa";
							x = "(safeZoneW) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)";
						};
						class CampaignLobbyBackgroundTabletButtonBar: RscPicture
						{
							colorBackground[] = {1, 1, 1, 1};
							colorText[] = {1, 1, 1, 1};
							h = "(										(safeZoneH) - 									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1) * 2)";
							idc = 52009;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_buttonbar_co.paa";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5)";
							x = "(										(safeZoneW) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1) - 								(										(pixelW * 										(pixelGridNoUIScale) * 2) * 4.5))";
							y = "(									(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1))";
						};
						class CampaignLobbyBackgroundTabletLeft: RscPicture
						{
							colorBackground[] = {1, 1, 1, 1};
							colorText[] = {1, 1, 1, 1};
							h = "(safeZoneH)";
							idc = 52003;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_left_co.paa";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)";
							x = 0;
							y = 0;
						};
						class CampaignLobbyBackgroundTabletRight: CampaignLobbyBackgroundTabletLeft
						{
							idc = 52004;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_right_co.paa";
							x = "(safeZoneW) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)";
						};
						class CampaignLobbyBackgroundTabletTop: RscPicture
						{
							colorBackground[] = {1, 1, 1, 1};
							colorText[] = {1, 1, 1, 1};
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)";
							idc = 52001;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_top_co.paa";
							w = "safeZoneW";
							x = 0;
							y = 0;
						};
						class CampaignLobbyBackgroundTabletTopLeft: RscPicture
						{
							colorBackground[] = {1, 1, 1, 1};
							colorText[] = {1, 1, 1, 1};
							h = "(										(pixelH * 										(pixelGridNoUIScale) * 2) * 1)";
							idc = 52005;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_topleftcorner_co.paa";
							w = "(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)";
							x = 0;
							y = 0;
						};
						class CampaignLobbyBackgroundTabletTopRight: CampaignLobbyBackgroundTabletTopLeft
						{
							idc = 52006;
							text = "A3\Missions_F_Exp\data\Img\lobby\ui_campaign_lobby_background_tablet_toprightcorner_co.paa";
							x = "(safeZoneW) - 									(										(pixelW * 										(pixelGridNoUIScale) * 2) * 1)";
							y = 0;
						};
					};
				};
			};
		};
	};
};
