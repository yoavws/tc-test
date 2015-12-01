//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	/* comment for git */
	lr_start_transaction("ZAP");
	truclient_step("2", "Navigate to 'http://zap.co.il/'", "snapshot=Action_2.inf");
	truclient_step("4", "Type galaxy tab s2 in אני רוצה לקנות textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Press Enter key on אני רוצה לקנות textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Samsung Galaxy Tab S2... link", "snapshot=Action_6.inf");
	truclient_step("7", "Click on לקנייה link", "snapshot=Action_7.inf");
	lr_end_transaction("ZAP",0);
	lr_start_transaction("store1");
	truclient_step("8", "Activate tab #2", "snapshot=Action_8.inf");
	truclient_step("9", "Click on Exit", "snapshot=Action_9.inf");
	truclient_step("10", "Click on קנה עכשיו link", "snapshot=Action_10.inf");
	truclient_step("11", "Click on PopCloseBox image", "snapshot=Action_11.inf");
	lr_end_transaction("store1",0);

	return 0;
}
