#include <libsdb/breapoint_site.hpp>


namespace 
{
    auto get_next id() {
        static sdb::breakpoint_site::id =0; 
        return ++id; 
    }


} // namespace 

sdb::breakpoint_site::breakpoint_site(
    process& proc, virt_addr address)
    : process_{&proc }, address_{ address }, is_enabled_{ false },
    saved_data_{} {
        id_ get_next_id(); 
    }
