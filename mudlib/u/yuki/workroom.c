// Room: /u/yuki/workroom.c

inherit ROOM;

void create()
{
	set("short", "[1;35mÃ¨ÎÑ[2;37;0m");
	set("long", @LONG
ÕâÀïÊÇÁçÀ¼µÄ¹¤×÷ÊÒ£¬Îİ×Ó²»´ó£¬µ«ÊÇ²¼ÖÃµÄºÜÎÂÜ°£¬µ­×ÏÉ«µÄ´°Á±£¬
µ­×ÏÉ«µÄ¼Ò¾ß£¬µ­×ÏÉ«µÄÇ½±Ú¡£Ç½Ö½ÉÏÊÇÇ³·ÛÉ«µÄÒ»Ö»Hello Kitty£¬
±ùÏäÀïÃæ·ÅÂúÁË¿ÉÀÖºÍÁãÊ³£¬Êé¼ÜÉÏ¶ÑµÄ¶¼ÊÇÂş»­ºÍĞ¡Ëµ¡£´ó´óµÄÉ³
·¢ÈíÈíµÄ£¬Ò»×ø¾ÍÏİ½øÈ¥£¬Êæ·ş¼«ÁË¡£µçÊÓ·ÅµÄÊÇChannel VÆµµÀ£¬Òô
ÏìÕûÌì·Å×Å¸èÇú¡£Ç³·ÛÉ«µÄµØ°å×©ÓÃµ­×ÏÉ«Æ´³ö¼¸¸ö×Ö£¬Once in a 
blue moon.ÁçÀ¼Õı´©×ÅÃ«Ã«ÍÏĞ¬ºÍHello KittyµÄË¯ÒÂ£¬×øÔÚµçÄÔÇ°×Ğ
Ï¸Ë¼¿¼×Å£¬ÊÖÏÂÈ´²»Í£µÄÇÃ´ò¼üÅÌ£¬Ô­À´ÕıÔÚÅ¬Á¦µÄ¹¤×÷×Å¡£
LONG
	);
	set("exits", ([ /* sizeof() == 7 */
  "sleeping" : __DIR__"sleeproom",
  "wizroom" : "/d/wiz/wizroom",
  "down" : "/d/zhongzhou/shizhongxin",
   "heart" : "/u/heart/workroom.c",
  "mool" : "/u/mool/workroom",
  "meeting" : "/d/wiz/meeting.c",
  "ffdd" : "/u/ffdd/workroom",
]));
	set("valid_startroom", 1);
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
