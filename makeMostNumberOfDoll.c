#include <stdio.h>
#include<limits.h>

int main() {
    long long eyes, mouths, bodies;
    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);
    long long complete = eyes / 2;
    if (mouths < complete) complete = mouths;
    if (bodies < complete) complete = bodies;
    long long incomplete = (eyes - complete * 2) < mouths ? (eyes - complete * 2) : mouths;
    incomplete = incomplete < bodies - complete ? incomplete : bodies - complete; // Use remaining bodies if fewer
    long long total = complete + incomplete;
    printf("%lld\n", total);
    return 0;
}

/*
#include <stdio.h>
#include<limits.h>

int main() {
    long long eyes, mouths, bodies;
    
    // Read the number of eyes, mouths, and bodies
    scanf("%lld %lld %lld", &eyes, &mouths, &bodies);

    // Calculate the maximum number of complete Katryoshkas
    long long complete = eyes / 2; // Each Katryoshka needs 2 eyes
    if (mouths < complete) complete = mouths; // Adjust if mouths are fewer
    if (bodies < complete) complete = bodies; // Adjust if bodies are fewer

    // Calculate the maximum number of additional incomplete Katryoshkas
    long long incomplete = (eyes - complete * 2) < mouths ? (eyes - complete * 2) : mouths; // Use remaining eyes or mouths, whichever is fewer
    incomplete = incomplete < bodies - complete ? incomplete : bodies - complete; // Use remaining bodies if fewer

    // Sum up complete and incomplete Katryoshkas
    long long total = complete + incomplete;

    // Print the result
    printf("%lld\n", total);

    return 0;
}
*/
