#include <cstdio>
#include "bitmap_image.hpp"

int main()
{
    bitmap_image image("test.bmp");

    if (!image)
    {
        printf("Error - Failed to open: test.bmp\n");
        return 1;
    }

//    unsigned int total_number_of_pixels = 0;
//
//    const unsigned int height = image.height();
//    const unsigned int width  = image.width();
//
//    for (std::size_t y = 0; y < height; ++y)
//    {
//        for (std::size_t x = 0; x < width; ++x)
//        {
//            rgb_t colour;
//
//            image.get_pixel(x, y, colour);
//
//            if (colour.red >= 111)
//                total_number_of_pixels++;
//        }
//    }

    printf("test.bmp header reader: \n");
    printf("Image width: %d\n",image.width());
    printf("Image height: %d\n",image.height());
    printf("Image bytes per pixel: %d\n",image.bytes_per_pixel());

    return 0;
}