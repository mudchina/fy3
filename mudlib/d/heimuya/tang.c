inherit ROOM;			   
      
void create()
{
        set("short", "令牌堂");
        set("long",@LONG
这里是黑木崖的第二大堂白虎堂的令牌室。室内青砖铺地。正中石桌
上有凹刻下去，当中放着一只小盒子，盒盖用铁链锁到上面房梁上。.
LONG );		  
        set("exits", ([	
	    "west"      : __DIR__"qing",
	]));
	setup();
	replace_program(ROOM);
}
