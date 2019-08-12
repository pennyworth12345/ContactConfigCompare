class CfgMovesMaleSdr_TC3: CfgMovesMaleSdr
{
	class States
	{
		class Crew {};
		class Grad_Gunner: Crew
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo01.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo01", 1};
		};
		class KIA_Truck_02_Driver: DefaultDie
		{
			actions = "DeadActions";
			connectTo[] = {"DeadState", 0.1};
			file = "\A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Driver.rtm";
			looped = 0;
			soundEnabled = 0;
			speed = 0.5;
			terminal = 1;
		};
		class KIA_Truck_Cargo01: KIA_Truck_Driver
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo01.rtm";
		};
		class KIA_Truck_Cargo02: KIA_Truck_Driver
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo02.rtm";
		};
		class KIA_Truck_Cargo03: KIA_Truck_Driver
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo03.rtm";
		};
		class KIA_Truck_Cargo04: KIA_Truck_Driver
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo04.rtm";
		};
		class KIA_Truck_Driver: DefaultDie
		{
			actions = "DeadActions";
			connectTo[] = {"DeadState", 0.1};
			file = "A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Driver.rtm";
			looped = 0;
			speed = 0.5;
			terminal = 1;
		};
		class Truck_02_Driver: Crew
		{
			file = "\A3\soft_f_beta\Truck_02\data\Anim\Truck_02_driver.rtm";
			interpolateTo[] = {"KIA_Truck_02_Driver", 1};
		};
		class Truck_Cargo01: Crew
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo01.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo01", 1};
		};
		class Truck_Cargo02: Crew
		{
			connectTo[] = {"Truck_Cargo02", 0.1, "Truck_Cargo02_V1", 0.1, "Truck_Cargo02_V2", 0.1, "Truck_Cargo02_V3", 0.1, "Truck_Cargo02_V4", 0.1};
			equivalentTo = "Truck_Cargo02";
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo02_V0.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo02", 0.1};
			speed = 0.3;
			variantAfter[] = {5, 10, 20};
			variantsAI[] = {"Truck_Cargo02", 0.6, "Truck_Cargo02_V1", 0.1, "Truck_Cargo02_V2", 0.1, "Truck_Cargo02_V3", 0.1, "Truck_Cargo02_V4", 0.1};
		};
		class Truck_Cargo02_V1: Truck_Cargo02
		{
			connectTo[] = {"Truck_Cargo02", 0.1};
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo02_V1.rtm";
			head = "headNo";
			interpolateTo[] = {"KIA_Truck_Cargo02", 0.1};
			speed = 0.197;
			variantAfter[] = {5, 5, 5};
		};
		class Truck_Cargo02_V2: Truck_Cargo02
		{
			connectTo[] = {"Truck_Cargo02", 0.1};
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo02_V2.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo02", 0.1};
			speed = 0.517;
			variantAfter[] = {2, 2, 2};
		};
		class Truck_Cargo02_V3: Truck_Cargo02
		{
			connectTo[] = {"Truck_Cargo02", 0.1};
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo02_V3.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo02", 0.1};
			speed = 0.24;
			variantAfter[] = {4, 4, 4};
		};
		class Truck_Cargo02_V4: Truck_Cargo02_V1
		{
			connectTo[] = {"Truck_Cargo02", 0.1};
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo02_V4.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo02", 0.1};
			speed = 0.197;
		};
		class Truck_Cargo03: Crew
		{
			connectTo[] = {"Truck_Cargo03", 0.1, "Truck_Cargo03_V1", 0.1, "Truck_Cargo03_V2", 0.1};
			equivalentTo = "Truck_Cargo03";
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo03_V0.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo03", 0.1};
			speed = 0.3;
			variantAfter[] = {5, 10, 20};
			variantsAI[] = {"Truck_Cargo03", 0.6, "Truck_Cargo03_V1", 0.2, "Truck_Cargo03_V2", 0.2};
		};
		class Truck_Cargo03_V1: Truck_Cargo03
		{
			connectTo[] = {"Truck_Cargo03", 0.1};
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo03_V1.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo03", 0.1};
			speed = 0.197;
			variantAfter[] = {5, 5, 5};
		};
		class Truck_Cargo03_V2: Truck_Cargo03
		{
			connectTo[] = {"Truck_Cargo03", 0.1};
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo03_V2.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo03", 0.1};
			speed = 0.238;
			variantAfter[] = {4, 4, 4};
		};
		class Truck_Cargo04: Crew
		{
			connectTo[] = {"Truck_Cargo04", 0.1, "Truck_Cargo04_V1", 0.1, "Truck_Cargo04_V2", 0.1, "Truck_Cargo04_V3", 0.1};
			equivalentTo = "Truck_Cargo04";
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo04_V0.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo04", 0.1};
			speed = 0.3;
			variantAfter[] = {5, 10, 20};
			variantsAI[] = {"Truck_Cargo04", 0.6, "Truck_Cargo04_V1", 0.13, "Truck_Cargo04_V2", 0.13, "Truck_Cargo04_V3", 0.13};
		};
		class Truck_Cargo04_V1: Truck_Cargo04
		{
			connectTo[] = {"Truck_Cargo04", 0.1};
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo04_V1.rtm";
			head = "headNo";
			interpolateTo[] = {"KIA_Truck_Cargo04", 0.1};
			speed = 0.141;
			variantAfter[] = {7, 7, 7};
		};
		class Truck_Cargo04_V2: Truck_Cargo04
		{
			connectTo[] = {"Truck_Cargo04", 0.1};
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo04_V2.rtm";
			head = "headNo";
			interpolateTo[] = {"KIA_Truck_Cargo04", 0.1};
			speed = 0.196;
			variantAfter[] = {5, 5, 5};
		};
		class Truck_Cargo04_V3: Truck_Cargo04
		{
			connectTo[] = {"Truck_Cargo04", 0.1};
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Cargo04_V3.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo04", 0.1};
			speed = 0.195;
			variantAfter[] = {5, 5, 5};
		};
		class Truck_Driver: Crew
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\Truck_02_Driver.rtm";
			interpolateTo[] = {"KIA_Truck_Driver", 1};
		};
	};
};
