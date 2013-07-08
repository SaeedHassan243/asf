static const char *pcDefaultPage = "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\"><html><head><title>AVR&reg;32 UC3 Control Panel</title></head><body bgcolor=\"#2477E6\" text=\"#FFFFFF\" link=\"#FFFF00\" vlink=\"#00FF00\"><DIV ALIGN=CENTER><h1>Welcome to the AVR&reg;32 UC3 Control Panel web server.</h1></DIV><br></br><p>The page you requested cannot be found on the server. This is whether because: <ul><li>you mistyped the URL, <li>the web site on the server is not up-to-date or there's no web site on the server, <li>the Control Panel file system is corrupted. <a href=\"./format?a\">Format</a> it now then update the web site by one of the following methods described here below. </ul></p><br><h3><p>To update the web site from a PC, you should: </p></h3><ol><li>press the joystick to switch the Control Panel to USB device mode, <li>connect your PC to the EVK1100 board USB plug, <li>access the Control Panel Mass Storage memory with Windows Explorer, <li>copy the new web site under the /WEB<a href=\"#fn1\">(*)</a> directory of the Control Panel Mass Storage memory(copy/paste from PC to Control Panel), <li>safely unplug the Control Panel from the PC, <li>unplug the USB cable from the board. You may now use the web server. </ol><br><h3><p>To update the web site from a USB key, you should: </p></h3><ol><li>copy a WEB<a href=\"#fn1\">(*)</a> directory with its content to the USB key, <li>connect the USB key to the EVK1100 board USB plug, <li>with left/right strokes on the joystick, navigate through the menu(see the third line of the LCD) until you reach the feature titled \"Upload WEB Files\", <li>press the joystick : while the web site is being uploaded, the message \"Uploading WEB Files\" is displayed on the LCD. When the copy is done, the LCD display goes back to the menu selection \"Upload WEB Files\". You may now use the web server. </ol><hr><fn id=fn1><P><i>(*): In the AT32UC3-SoftwareFramework-x.x.x.zip package, the default web site can be found under AT32UC3-x.x.x/APPLICATIONS/EVK1100-CONTROL-PANEL/DATAFLASH_CONTENT/WEB</i></P></fn></body></html>";
