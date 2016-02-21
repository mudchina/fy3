//taishan 
//huanyiting.c

inherit ROOM;

void create ()
{
        set ("short", "更衣亭");
        set ("long", @LONG

供行人更换适于登山衣物的小亭子，已经爬累的人们也可以在这里歇
一歇脚，聊一聊天，轻松一下。从这儿往北看，是高可入云的泰山；
往南望则可鸟瞰扬州城，景色十分不错。亭子旁边有一棵松树，斜斜
地伸向悬崖外。
LONG);

        set("exits", 
        ([ //sizeof() == 4
		"north" : "/d/taishan/yitian",
        ]));

        set("objects", 
        ([ //sizeof() == 1
                "/open/tianson/nikuai/nikuai.c" : 1,
        ]));


        set("outdoors", "changan");
      set("no_clean_up", 0);
        setup();
	replace_program(ROOM);
}

