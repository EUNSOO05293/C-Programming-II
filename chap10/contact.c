/*
typedef struct contact Contact;
Contact kim = {0};
*/

#include "contact.h"

Contact Kim = {0};

int main()
{
	Contact lee = { "LEE", "010-1234-5678" };

	Contact lee2 = { 0 };

	lee2 = lee;
	return 0;

	strcpy(lee2.name, "LEE2");
	strcpy(lee2.phone, "010-1111-1111");
}