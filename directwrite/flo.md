# IDWriteTextFormat::SetFlowDirection, IDWriteTextFormat::SetReadingDirection

## MSDN
- [IDWriteTextFormat::SetFlowDirection method](https://docs.microsoft.com/en-us/windows/win32/api/dwrite/nf-dwrite-idwritetextformat-setflowdirection)
- [IDWriteTextFormat::SetReadingDirection method](https://docs.microsoft.com/en-us/windows/win32/api/dwrite/nf-dwrite-idwritetextformat-setreadingdirection)
- [DWRITE_FLOW_DIRECTION enumeration](https://docs.microsoft.com/en-us/windows/win32/api/dwrite/ne-dwrite-dwrite_flow_direction)
- [DWRITE_READING_DIRECTION enumeration](https://docs.microsoft.com/en-us/windows/win32/api/dwrite/ne-dwrite-dwrite_reading_direction)

## Description
```cpp
HRESULT SetFlowDirection(DWRITE_FLOW_DIRECTION flowDirection);
HRESULT SetReadingDirection(DWRITE_READING_DIRECTION readingDirection);

typedef enum DWRITE_FLOW_DIRECTION {
  DWRITE_FLOW_DIRECTION_TOP_TO_BOTTOM = 0,
  DWRITE_FLOW_DIRECTION_BOTTOM_TO_TOP = 1,
  DWRITE_FLOW_DIRECTION_LEFT_TO_RIGHT = 2,
  DWRITE_FLOW_DIRECTION_RIGHT_TO_LEFT = 3
} ;

typedef enum DWRITE_READING_DIRECTION {
  DWRITE_READING_DIRECTION_LEFT_TO_RIGHT = 0,
  DWRITE_READING_DIRECTION_RIGHT_TO_LEFT = 1,
  DWRITE_READING_DIRECTION_TOP_TO_BOTTOM = 2,
  DWRITE_READING_DIRECTION_BOTTOM_TO_TOP = 3
} ;
```

## Result
Flow = TopToBottom, Reading = LeftToRight
![](textformat_flowdirection/topleft.png)

Flow = TopToBottom, Reading = RightToLeft
![](topright.png)

Flow = BottomToTop, Reading = LeftToRight
![](textformat_flowdirection/bottomleft.png)

Flow = BottomToTop, Reading = RightToLeft
![](bottomright.png)

Flow = LeftToRight, Reading = TopToBottom
![](lefttop.png)

Flow = LeftToRight, Reading = BottomToTop
![](leftbottom.png)

Flow = RightToLeft, Reading = TopToBottom
![](righttop.png)

Flow = RightToLeft, Reading = BottomToTop
![](rightbottom.png)