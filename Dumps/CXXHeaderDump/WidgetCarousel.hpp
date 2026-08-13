#ifndef UE4SS_SDK_WidgetCarousel_HPP
#define UE4SS_SDK_WidgetCarousel_HPP

struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
    FSlateBrush HighlightBrush;                                                       // 0x0010 (size: 0xB0)
    FButtonStyle LeftButtonStyle;                                                     // 0x00C0 (size: 0x370)
    FButtonStyle CenterButtonStyle;                                                   // 0x0430 (size: 0x370)
    FButtonStyle RightButtonStyle;                                                    // 0x07A0 (size: 0x370)

}; // Size: 0xB10

struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
    FButtonStyle InnerButtonStyle;                                                    // 0x0010 (size: 0x370)
    FSlateBrush NavigationButtonLeftImage;                                            // 0x0380 (size: 0xB0)
    FSlateBrush NavigationButtonRightImage;                                           // 0x0430 (size: 0xB0)

}; // Size: 0x4E0

#endif
