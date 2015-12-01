//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

navigating()
{
	lr_start_transaction("navigating");
	truclient_step("1", "Navigate to 'http://google.com/'", "snapshot=navigating_1.inf");
	truclient_step("3", "search (1)", "snapshot=navigating_3.inf");
	{
		truclient_step("3.1", "Click on חיפוש combobox", "snapshot=navigating_3.1.inf");
		truclient_step("3.2", "Type tomatocart in חיפוש combobox", "snapshot=navigating_3.2.inf");
		truclient_step("3.3", "Press Enter key on חיפוש combobox", "snapshot=navigating_3.3.inf");
	}
	truclient_step("5", "Click on Store Demo link", "snapshot=navigating_5.inf");
	truclient_step("6", "Click on Administration Panel image", "snapshot=navigating_6.inf");
	truclient_step("7", "Activate tab #2", "snapshot=navigating_7.inf");
	truclient_step("8", "Close active tab", "snapshot=navigating_8.inf");
	truclient_step("9", "Activate tab #1", "snapshot=navigating_9.inf");
	truclient_step("10", "Click on Administration Panel image", "snapshot=navigating_10.inf");
	truclient_step("11", "Activate tab #2", "snapshot=navigating_11.inf");
	truclient_step("12", "Close active tab", "snapshot=navigating_12.inf");
	truclient_step("13", "Activate tab #1", "snapshot=navigating_13.inf");
	truclient_step("14", "Click on Store Front On Pad image", "snapshot=navigating_14.inf");
	lr_end_transaction("navigating",0);

	return 0;
}
