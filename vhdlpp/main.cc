
const char COPYRIGHT[] =
          "Copyright (c) 2011 Stephen Williams (steve@icarus.com)";

/*
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */
# include  "vhdlpp_config.h"
# include  "version_base.h"
# include  "version_tag.h"

const char NOTICE[] =
"  This program is free software; you can redistribute it and/or modify\n"
"  it under the terms of the GNU General Public License as published by\n"
"  the Free Software Foundation; either version 2 of the License, or\n"
"  (at your option) any later version.\n"
"\n"
"  This program is distributed in the hope that it will be useful,\n"
"  but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
"  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
"  GNU General Public License for more details.\n"
"\n"
"  You should have received a copy of the GNU General Public License along\n"
"  with this program; if not, write to the Free Software Foundation, Inc.,\n"
"  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.\n"
;

# include <stdio.h>
# include  <stdlib.h>
#if defined(HAVE_GETOPT_H)
# include  <getopt.h>
#endif

int main(int argc, char*argv[])
{
      int opt;

      while ( (opt=getopt(argc, argv, "vV")) != EOF) switch (opt) {

	  case 'v':
	    fprintf(stderr, "Icarus Verilog VHDL Parse version "
		    VERSION " (" VERSION_TAG ")\n\n");
	    fprintf(stderr, "%s\n\n", COPYRIGHT);
	    fputs(NOTICE, stderr);
	    break;

	  case 'V':
	    fprintf(stdout, "Icarus Verilog VHDL Parse version "
		    VERSION " (" VERSION_TAG ")\n\n");
	    fprintf(stdout, "%s\n\n", COPYRIGHT);
	    fputs(NOTICE, stdout);
	    break;

      }

      return 0;
}
