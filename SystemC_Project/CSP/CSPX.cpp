#include "CSPX.h"              /* Line 2 */

void CSPX::prc_CSPX () { /* Line 3 */
	sc_uint<8> CSPX_Data;
	if(Rst)
		CSPX_out=0;
	else 
		if (Encspx)
		{
			CSPX_out=CSPX_in.read();
			
		}
}
