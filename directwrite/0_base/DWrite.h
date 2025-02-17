#ifndef DWRITE_H
#define DWRITE_H
#include <d2d1_3.h>
#include <dwrite_3.h>
#include <wrl/client.h>


class DWrite {
public:
    void Init(D2D1_RECT_F rect, const Microsoft::WRL::ComPtr<ID2D1DeviceContext7> &d2dContext);
    void Render();

private:
    void Change();

    Microsoft::WRL::ComPtr<IDWriteFactory8> m_dwriteFactory;
    Microsoft::WRL::ComPtr<IDWriteTextFormat> m_textFormat;
    Microsoft::WRL::ComPtr<IDWriteTextLayout> m_textLayout;

    Microsoft::WRL::ComPtr<ID2D1DeviceContext7> m_d2dContext;

    Microsoft::WRL::ComPtr<ID2D1SolidColorBrush> m_brush;

    D2D1_RECT_F m_rect{};
};



#endif //DWRITE_H
