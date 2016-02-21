//westroad1.c

inherit ROOM;

void create()
{
        set("short", "山路");
        set("long",
             "这是一条直通西方的山路，向西远望，群山巍峨，云雾飘渺，\n"
	"再往前不远，就要进入深山之中了。东面是条小溪。\n"
	);
	set("exits",([
		      "west" : __DIR__"westroad2",
		      "east" : "/d/huizhu/xiaoxi",
	   ]));
	setup();
	replace_program(ROOM);
}
        
