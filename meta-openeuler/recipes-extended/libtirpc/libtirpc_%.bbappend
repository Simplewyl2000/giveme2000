OPENEULER_BRANCH = "openEuler-23.03"

PV = "1.3.3"

SRC_URI[sha256sum] = "6474e98851d9f6f33871957ddee9714fdcd9d8a5ee9abb5a98d63ea2e60e12f3"

SRC_URI += " \
    file://0001-update-libtirpc-to-enable-tcp-port-listening.patch \
"
