#ifndef LOVYANGFX_CONFIG_HPP_
#define LOVYANGFX_CONFIG_HPP_

namespace lgfx
{
  struct LGFX_Config
  {
    static constexpr spi_host_device_t spi_host = VSPI_HOST;
    static constexpr int dma_channel = 1;
    static constexpr int spi_mosi = 23;
    static constexpr int spi_miso = -1;
    static constexpr int spi_sclk =  5;
  };
}

class LGFX : public lgfx::LGFX_SPI<lgfx::LGFX_Config>
{
public:
  LGFX(void) : lgfx::LGFX_SPI<lgfx::LGFX_Config>()
  {
    static lgfx::Panel_TTGO_TS panel;

    setPanel(&panel);
  }
};

#endif
