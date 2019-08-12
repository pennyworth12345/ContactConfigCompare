class display3DENPublishMissionSelectImage
{
	idd = 167;
	class Controls
	{
		class ButtonCancel: ctrlButtonCancel
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	160 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	100 * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			textImport = "Import";
			textLoad = "Open";
			textSave = "Save";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	160 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	100 * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class Files: ctrlListbox
		{
			font = "EtelkaMonospacePro";
			h = "(	100 - (23 + 	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			idc = 103;
			sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "(	160 * 2/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
		};
		class Folders: ctrlTree
		{
			font = "EtelkaMonospacePro";
			h = "(	100 - (23 + 	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			iconFolder = "\a3\3DEN\Data\Cfg3DEN\Layer\icon_ca.paa";
			iconFolderDefault = "\a3\3DEN\Data\Cfg3DEN\Layer\iconDefault_ca.paa";
			idc = 102;
			sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "(	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
		};
		class Name: ctrlStaticMulti
		{
			font = "EtelkaMonospacePro";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			idc = 101;
			sizeEx = "2.945 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			w = "(	160 - 2) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	100 * 0.5 - (3 * 	5 + 3)) * (pixelH * pixelGrid * 	0.50)";
		};
		class Preview: ctrlStaticPictureKeepAspect
		{
			h = "(	100 - (23 + 	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			idc = 104;
			w = "(	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "Select Image";
			w = "160 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class ControlsBackground
	{
		class Background: ctrlStaticBackground
		{
			h = "(	100 - (10 + 	5)) * (pixelH * pixelGrid * 	0.50)";
			w = "160 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "160 * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	100 * 0.5 - 2 * (	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable {};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles {};
		class BackgroundPreview: ctrlStatic
		{
			colorBackground[] = {0, 0, 0, 1};
			h = "(	100 - (23 + 	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			w = "(	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			x = "((getResolution select 2) * 0.5 * pixelW) + (	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
