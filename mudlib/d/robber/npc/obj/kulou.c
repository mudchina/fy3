inherit ITEM;

void create()
{
	set_name("°×¹Ç÷¼÷Ã",({"kulou"}));
        set_weight(3000);
        if( clonep() )
                set_default_object(__FILE__);
	else {
	    set("long",
     	        "²Ò°×µÄ÷¼÷Ã£¬Â¶³ö²ÐÆÆ²»È«µÄÑÀ³Ý£¬ËÆºõÔÚÄüÐ¦¡£\n");
	    set("unit","¾ß");
	    set("value",0);
	}
  setup();
}
