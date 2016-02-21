//Mr.music yangzhou ÑÃÃÅ

inherit ROOM;

void create()
{
        set("short", "ÑÃÃÅ");
        set("long", @LONG
	ÕâÀï¾ÍÊÇÑïÖİ¸®ÑÃ£¬ÑÃÃÅ¿ÚÊÇÒ»¶ÔÍşÎäµÄÊ¯Ê¨£¬ÉîºìÉ«µÄ´óÃÅ½ô±Õ
×Å£¬Ö»ÓĞÃÅ¿ÚÁ½Ãû±øÓÂÒ»¶¯²»¶¯¡£Ë×»°Ëµ£º°Ë×ÖÑÃÃÅ³¯Ç®¿ª£¬¶ÔÃæ¾ÍÊÇ³ÇÀï
×îÓĞÃûµÄÇ®×¯ÁË¡£

LONG
        );

        set("exits", ([ 
                      "south" : __DIR__"datang",
                      "north" : __DIR__"dongguan1",
                     ]));
        set("objects", ([
                __DIR__"npc/bingyong": 2
        ]) );

        setup();
}

int valid_leave(object me, string dir)
{
        if( dir=="north"  )
        {
        tell_object(me,"[36mÄã¾õµÃÃÅ¿ÚµÄÊ¯Ê¨×ÓÔÚ±³ºóµÉÁËÄãÒ»ÑÛ,ÄãĞÄÀïÒ»»Å²îµãË¤µ¹¡£[37m \n");
        if (me->query("sen")>10) me->add("sen",-10);
        return 1;
        }
        if(dir=="south")
        {
         if ( me->query_skill("literate",1) < 20 )
           {
            tell_object(me,"±øÓÂÀ¹×¡ÄãËµ£ºÖª¸®´óÈËÏòÀ´²»¼û´ÖÈËÒ°·ò.\n");
            say("±øÓÂÀ¹×¡ÁË"+me->query("name")+".\n");
            return notify_fail("±øÓÂÀ¹×¡ÁËÄã.\n");
           } 
           tell_object(me,"±øÓÂ¸æ½ëÄãµÀ£º´óÌÃÖ®ÉÏÒ»¶¨²»µÃĞú»©.\n");
           return 1;
        }
}



