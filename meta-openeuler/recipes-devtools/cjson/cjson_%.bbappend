OPENEULER_SRC_URI_REMOVE = "https git"
OPENEULER_BRANCH = "openEuler-23.03"

PV = "1.7.15"

SRC_URI = "file://v${PV}.tar.gz"

S = "${WORKDIR}/cJSON-${PV}"
