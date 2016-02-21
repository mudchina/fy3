//Mr.music yangzhou 衙门

inherit ROOM;

void create()
{
        set("short", "衙门");
        set("long", @LONG
	这里就是扬州府衙，衙门口是一对威武的石狮，深红色的大门紧闭
着，只有门口两名兵勇一动不动。俗话说：八字衙门朝钱开，对面就是城里
最有名的钱庄了。

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
        tell_object(me,"[36m你觉得门口的石狮子在背后瞪了你一眼,你心里一慌差点摔倒。[37m \n");
        if (me->query("sen")>10) me->add("sen",-10);
        return 1;
        }
        if(dir=="south")
        {
         if ( me->query_skill("literate",1) < 20 )
           {
            tell_object(me,"兵勇拦住你说：知府大人向来不见粗人野夫.\n");
            say("兵勇拦住了"+me->query("name")+".\n");
            return notify_fail("兵勇拦住了你.\n");
           } 
           tell_object(me,"兵勇告诫你道：大堂之上一定不得喧哗.\n");
           return 1;
        }
}



