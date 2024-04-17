#include <stdio.h>

int main()
{

  long long int eye, face, body;
  scanf("%lld %lld %lld", &eye, &face, &body);
  long long int ans = 0;
  long long int x;

  if(eye<=face && eye<=body)
    x = eye;
  else if(face<=eye && face<=body)
    x = face;
  else
    x = body;

  ans += x;
  eye -= x;
  face -= x;
  body -= x;

  if(eye/2 < body)
    ans+= eye/2;
  else
    ans+=body;

  printf("%lld\n", ans);
  return 0;
}