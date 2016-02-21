//Mr.music yangzhou ÓùÂëÍ·

inherit ROOM;

void enter_boad();

void create()
{
        set("short", "ÓùÂëÍ·");
        set("long", @LONG
	ÕâÀïÊÇÔËºÓÉÏµÄÒ»¸öÃ¦ÂµµÄĞ¡´¬ÂëÍ·£¬¿´À´²¢²»ÆğÑÛ£¬µ«Àú´úµÄ»ÊµÛ
ÄÏĞÒÑïÖİ£¬¶¼ÊÇ³Ë´¬°Ú¼ÜÓÚ´Ë£¬ÂëÍ·±ßµÄÊ¯±®ÉÏ×¢£ºÓùÂëÍ·£¬µ«Äê´úÒÑ²»¿É¿¼¡£
À´ÍùºÃ¶à[33m´¬[37mÖ»¶¼Í£²´ÓÚ´Ë£¬ÊÇÑïÖİ³ÇµÄÖØÒªÔËÊä¿Ú°¶¡£

LONG
        );


      set("item_desc", ([
              "chuan" : "ÕâĞ©´¬Ò²Ğí¿ÉÒÔ³Ë¡£\n",
                "´¬":     "ÎÊÎÊ´¬ÀÏ´ó°É.\n",
                       ]));

        set("exits", ([ 
                      "up" : __DIR__"xiaodongmenqiao",
                      "north" : __DIR__"changku",
                     ]));
        set("objects", ([
                        __DIR__"npc/chuanjia": 1,
                        __DIR__"npc/chuanlaoda": 1,
                        ]) );

        setup();
}

