# main bbfile: meta/recipes-support/boost/boost_1.75.0.bb

OPENEULER_BRANCH = "master"
OPENEULER_REPO_NAME = "boost"

PV = "1.81.0"

# modify 0001-Don-t-set-up-arch-instruction-set-flags-we-do-that-o.patch
FILESEXTRAPATHS_prepend := "${THISDIR}/${BPN}:"

# remove conflict files
SRC_URI_remove = "https://boostorg.jfrog.io/artifactory/main/release/${PV}/source/${BOOST_P}.tar.bz2 \
        file://boost-CVE-2012-2677.patch \
        file://0001-fiber-libs-Define-SYS_futex-if-it-does-not-exist.patch \
"

SRC_URI_prepend = " \
        file://${BOOST_P}.tar.gz \
        file://boost-1.80-outcome-Stop-Boost-regression-tests-complaining-about-no-test-tree.patch \
        file://boost-1.81-graph-Dont-run-performance-test-in-CI.patch \
        file://boost-1.81-random-Update-multiprecision_float_test.cpp-to-not-overflow.patch \
        file://boost-1.81-random-Update-multiprecision_int_test.cpp-to-not-accidental.patch \
        file://boost-1.81-random-test-Add-missing-includes.patch \
        "

SRC_URI[sha256sum] = "205666dea9f6a7cfed87c7a6dfbeb52a2c1b9de55712c9c1a87735d7181452b6"

S = "${WORKDIR}/${BOOST_P}"

# keep consistent with the higher version bb
BOOST_LIBS += "json"
BJAM_OPTS += "-sICU_PATH=${STAGING_EXECPREFIXDIR}"
