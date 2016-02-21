
//Mr.music  yangzhou's Ã·»¨ÊéÔº

inherit ROOM;

void create()
{
        set("short", "Ã·»¨ÊéÔº");
        set("long", @LONG
	ÕâÀï¾ÍÊÇÃûÑïº£ÄÚµÄÑ§¸® -- Ã·»¨ÊéÔº¡£ÔºÄÚÇå½àÕûÆë£¬ÆÓÊµµäÑÅ¡£
ÔºÄÚ³¤×ÅÒ»¿Ã²¢²»ÆğÑÛµÄ»¨Ä¾£¬È´ÊÇ¡°Î¬ÑïÒ»Ö§»¨  ËÄº£ÎŞÍ¬Àà¡±µÄ[1;37mÇí»¨[2;370;m ¡£
ÔºÄÚ»¨ÏãÕóÕó£¬ÊéÉùÀÊÀÊ£¬Ê¹ÄãÔİÊ±ÍüÈ´ÁËÊÀÌ¬Ñ×Á¹£¬½­ºş·×Õù¡£ÄãÍ»È»¾õµÃ
ËÆºõÈ±ÉÙÁËĞ©Ê²Ã´£¬ĞÄÀïÒ»Õó¿ÕĞé£¬Ê§ÂäÂäµÄ¡£

LONG
        );


        set("no_fight","1");
        set("no_magic",1);
        set("valid_startroom", 1);
        set("exits", ([
                "east" : __DIR__"yz-x2",
        ]));

        set("item_desc", ([
                       "Çí»¨" : "Ò»ÖÖºÜÏ¡ÓĞµÄ»¨Ä¾¡£ËØÓĞ¡°Î¬ÑïÒ»Ö¦»¨¡±µÄÃÀ³Æ\n" , 
                          ]));
        
        set("objects", ([
                __DIR__"npc/tangbohu": 1,
                __DIR__"npc/qiuxiang": 1,
        ]));

        setup();
}

int valid_leave(object me, string dir)
{
        me->set_temp("mark/ÌÆ", 0);
        return 1;
}

