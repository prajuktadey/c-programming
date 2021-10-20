#include <stdio.h>
#include <string.h>

int main()
{
	char needle[] = "heart";
	char haystack[] = "Get to the heart of the matter";
	char *found;

	found = strstr(haystack,needle);
	if(found == NULL)
		printf("The string \"%s\" was not found in \"%s\".\n",
				needle,
				haystack
			  );
	else
		printf("The string \"%s\" was found at offset %ld in \"%s\".\n",
				needle,
				found-haystack,
				haystack
			  );
	return(0);
}
