#include "car.h"
#include <string>
#include <vector>
#include <cmath>

Car::Car(int charge)
{
    speed = 0;
    gear = 0;
    wipers = 0;
    num_passengers = 0;
    battery_level = charge;
    rpm = 0;
    on = false;
    head_lights = false;
    interior_lights = false;
    locked = true;
    current_loc = {0, 0};
}

Car::~Car() {}

// REQUIRES OTHER FUNCTIONS
/*
  ### Branch:
    func_pickup-request

    ### Should:
    - Check the distance to pickup, drop-off, and home against current battery levels
    - Check if not currently on a trip
    - Check the number of requested passengers (limit 4)
    - If all checks pass, add the trip

    ### Relies on:
    - add_trip()
    - check_distance()

    ### In depth:
    This method should queue valid trips. It should check if a trip is valid by first checking the distance to complete the trip (distance to the pickup, to the dropoff, and then back home to charge). 
    If the trip is valid, it should call add_trip() to add the valid trip.
*/

Car &Car::pickup_request(std::vector<int> pickup_coords, std::vector<int> drop_coords, int new_passengers)
{	if (pickup_coords.check_distance())+(drop_coords.check_distance())+(go_home.check_distance()) <= read_battery) {
	pickup_coords.add_trip();
	if (has_passengers==0){
		drop_coords.addtrip();
		}
	if (has_passengers==1){
		go_home();
		}	
	}
	if (pickup.check_distance())+(drop-off.check_distance())+(home.check_distance()) >= read_battery){
	go_home();
	}
    return *this;
}

{
    return 0;
int Car::read_battery()
}

int Car::read_speed()
{
    return -10;
}

Car &Car::shift()
{
    return *this;
}

Car &Car::accelerate(int force, int target_speed)
{
    return *this;
}

Car &Car::decelerate(int force, int target_speed)
{
    return *this;
}

Car &Car::add_trip(std::vector<std::vector<int>> coords, int new_passengers)
{
    return *this;
}

bool Car::check_distance(std::vector<int> pickup, std::vector<int> dropoff)
{
    return true;
}

bool Car::is_home() 
{
    return false;
}

bool Car::has_passengers() 
{
    return false;
}

// Calculates distance between two points.
int Car::distance(double x1, double y1, double x2, double y2)
{
    return 0;
}

Car &Car::go_home()
{
    return *this;
}

Car &Car::navigate()
{
    return *this;
}

Car &Car::arrive()
{
    return *this;
}

Car &Car::turn_on()
{
    return *this;
}

Car &Car::turn_off()
{
    return *this;
}

Car &Car::lock()
{
    return *this;
}

Car &Car::unlock()
{
    return *this;
}

Car &Car::set_wipers(int level)
{
    return *this;
}

Car &Car::charge(int duration)
{
    return *this;
}

Car &Car::toggle_lights(bool exterior)
{
    return *this;
}
