#ifndef __UNICOLOR__
#define __UNICOLOR__

class UniColor
{
  public:
    union
    {
      struct
      {
        unsigned int blue: 8;
        unsigned int green: 8;
        unsigned int red: 8;
      };
      struct
      {
        unsigned int b: 8;
        unsigned int g: 8;
        unsigned int r: 8;
      };
      unsigned long hex: 24;
    };
    UniColor(unsigned _r, unsigned _g, unsigned _b) : r(_r), g(_g), b(_b) {};
    UniColor(unsigned _hex = 0x000000) : hex(_hex) {};
    void operator=(unsigned _hex)
    {
      hex = _hex;
    };
    void operator=(unsigned a[3])
    {
      r = a[0];
      g = a[1];
      b = a[2];
    };
};

#endif