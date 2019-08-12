class DisplayTest: DisplaySimulated
{
	idd = 456;
	class Controls
	{
		class Combo: ctrlCombo
		{
			h = 0.05;
			idc = 102;
			w = 0.3;
			x = 0.62;
			y = 0;
			class Items
			{
				class AnotherItem
				{
					default = 1;
					text = "O RLY";
				};
				class Item0
				{
					color[] = {1, 0, 1, 1};
					colorPicture[] = {0, 1, 1, 1};
					colorPictureDisabled[] = {0, 0, 0, 1};
					colorPictureRight[] = {0, 1, 0, 1};
					colorPictureRightDisabled[] = {0, 0, 0, 1};
					colorPictureRightSelected[] = {0, 0, 1, 1};
					colorPictureSelected[] = {1, 0, 0, 1};
					colorRight[] = {1, 1, 0, 1};
					data = "WTF";
					default = 0;
					picture = "\a3\Ui_f\data\Map\Markers\Military\warning_CA.paa";
					pictureRight = "\a3\Ui_f\data\Map\Markers\Military\unknown_CA.paa";
					text = "LOL";
					textRight = "ROFL";
					tooltip = "OMG";
					value = 42;
				};
			};
		};
		class Listbox: ctrlListbox
		{
			h = 1;
			idc = 100;
			w = 0.3;
			x = 0;
			y = 0;
			class Items
			{
				class AnotherItem
				{
					default = 1;
					text = "O RLY";
				};
				class Item0
				{
					color[] = {1, 0, 1, 1};
					colorPicture[] = {0, 1, 1, 1};
					colorPictureDisabled[] = {0, 0, 0, 1};
					colorPictureRight[] = {0, 1, 0, 1};
					colorPictureRightDisabled[] = {0, 0, 0, 1};
					colorPictureRightSelected[] = {0, 0, 1, 1};
					colorPictureSelected[] = {1, 0, 0, 1};
					colorRight[] = {1, 1, 0, 1};
					data = "WTF";
					default = 0;
					picture = "\a3\Ui_f\data\Map\Markers\Military\warning_CA.paa";
					pictureRight = "\a3\Ui_f\data\Map\Markers\Military\unknown_CA.paa";
					text = "LOL";
					textRight = "ROFL";
					tooltip = "OMG";
					value = 42;
				};
			};
		};
		class XListbox: ctrlXListbox
		{
			h = 0.05;
			idc = 101;
			tooltip = "Lorem ipsum dolor sit amet, dicam timeam ei mei. Et persecuti disputationi qui, in vim persius fierent. Agam graeci ei sit, duo an legere oportere inciderint,\n\nnovum noluisse voluptatum sit cu. Ne nam affert delectus eleifend, elit philosophia te sit. Mea cu quaeque vulputate maiestatis.";
			w = 0.3;
			x = 0.31;
			y = 0;
			class Items
			{
				class AnotherItem
				{
					default = 1;
					text = "O RLY";
				};
				class Item0
				{
					color[] = {1, 0, 1, 1};
					colorPicture[] = {0, 1, 1, 1};
					data = "WTF";
					default = 0;
					picture = "\a3\Ui_f\data\Map\Markers\Military\warning_CA.paa";
					text = "LOL";
					value = 42;
				};
			};
		};
	};
};
