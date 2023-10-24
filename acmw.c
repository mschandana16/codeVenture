// This is the code for level 7 of the hunt
// Input:  nothing as such
// Output: Association for Computing Machinery-Women
// PS: This is a sample code for level 7, participants can code in their favourable languages.
#include <stdio.h>
int main()
{
    char inputString[] = "n7YW3PVqaJ48OAbbBAjpCdWbuGFtUsEJu5GszFhpeCrFQUVgIJVdXs3KsiEC0HjeOZbUfKQoxx3934uwtrqLZZtXgcHK6Yacx9JOWAhSAYxiONr1vRhvjZ0gtMzCkaNuH9ipgi52K6SYumCtoEasMUBeMHSzsnkzbinAFMCP693C6IgHIuioYrJGDD4RLlEmZ6WOfnywSpUWIsJOx9AA2O7 YWYCgpvaA8jdTtTJ7ftY9TWYtfOzz1JPSP7o8cUkRyYdcyGq8sAdcrXdfnKtdWroBAopB03 3QwVPSIs0elGmvFlDCpuaMXAKvjM70FjotFo3BtqJIQANN1oedslhmYkb1nVEFZZPKq4O7Kpa6fTabJcz9FXyoyp2ucNaY4v0i7S4lbleFEtspKdnumupDIxXGu69iZnBGFPl8E4wdwxuLMn8wAPSfXiXDtxjM9WigePJPKbbhWplb88ri9 7qpcpexWOU94spaRuMHy6jGDAMzJVewNxGRabRH87oWY35ikIEkbocdH4DM0QHdyxl8IJJRhK6yUlWQfXI1o8aShSiEmP0iX1H3ZwDKo4DGnnGzYMD2TA95JjqAN9el01NsgiLYqDQWNlNRrzxVBSmRKlfwM3MfJGy0UmBYzXonDND8WFJj-sNp5e8TYouOC4PUiqWsYRiuOtZmECyB7gf0ouWcY7GR0GDNsG9H0NmVNQSwz8dBbOfSsvvXefCjn6MJoF6vSWO7Emnj";
    for (int i = 17; inputString[i] != '\0'; i += 18)
    {
        printf("%c", inputString[i]);
    }
}
