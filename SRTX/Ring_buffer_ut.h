#ifndef __SRTX_RING_BUFFER_UT_H__
#define __SRTX_RING_BUFFER_UT_H__

#include <cppunit/extensions/HelperMacros.h>


namespace SRTX
{
    class Ring_buffer_ut : public CppUnit::TestFixture
    {

        CPPUNIT_TEST_SUITE(Ring_buffer_ut);

        CPPUNIT_TEST(test_ring_buffer);

        CPPUNIT_TEST_SUITE_END();

        public:
        void setUp();
        void tearDown();

        protected:
        void test_ring_buffer();

    };

    CPPUNIT_TEST_SUITE_REGISTRATION(Ring_buffer_ut);

} // namespace

#endif // __SRTX_RING_BUFFER_UT_H__
