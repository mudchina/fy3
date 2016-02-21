// uptime.c

inherit F_CLEAN_UP;

// This command is also called by LOGIN_D, so we don't want it use 
// arguments.
int main()
{
        int t, d, h, m, s;
        string time;

        t = uptime();
        s = t % 60;             t /= 60;
        m = t % 60;             t /= 60;
        h = t % 24;             t /= 24;
        d = t;

        if(d) time = chinese_number(d) + "Ìì";
        else time = "";

        if(h) time += chinese_number(h) + "Ğ¡Ê±";
        if(m) time += chinese_number(m) + "·Ö";
        time += chinese_number(s) + "Ãë\n";

	write("¡¾[31mÌúÑª½­ºş[37m¡¿ÒÑ¾­Á¬ĞøÔËĞĞ"+time+"\n");
        return 1;
}

int help(object me)
{
        write(@HELP
Ö¸Áî¸ñÊ½ : uptime
 
Õâ¸öÖ¸Áî¸æËßÄã MUD ÒÑ¾­Á¬ĞøÔËĞĞÁË¶à¾Ã.
 
HELP
    );
    return 1;
}
