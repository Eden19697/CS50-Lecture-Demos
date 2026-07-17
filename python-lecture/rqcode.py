import os
import qrcode

img = qrcode.make("str or URL ...")

img.save("qr.png", "PNG")
