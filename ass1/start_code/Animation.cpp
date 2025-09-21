#include "Animation.h"
#include <glm/gtc/matrix_transform.hpp>
#include <glm/fwd.hpp>
Animation::Animation()
{
	this->m_model_mat = glm::mat4(1.0f);
}

Animation::~Animation()
{
}

void Animation::init()
{
	reset();
}

void Animation::update(float delta_time)
{
}

void Animation::reset()
{
	m_model_mat = glm::mat4(1.0f);
	m_model_mat = glm::translate(m_model_mat, glm::vec3(5.0f, 0.0f, 0.0f));

	local_angle_a = 0.0f;
	total_angle_a = 0.0f;
	global_angle_y = 0.0f;
}
void Animation::rotate_x()
{
	total_angle_a = std::fmod(total_angle_a + local_angle_a, 360.00f);
	m_model_mat = glm::rotate(m_model_mat, glm::radians(total_angle_a), glm::vec3(1.00f, 0.00f, 0.00f));

}
void Animation::rotate_global_y()
{
	// rotate total of angle = total_angle_a angle to x axis
	m_model_mat = glm::rotate(m_model_mat, glm::radians(total_angle_a), glm::vec3(1.00f, 0.00f, 0.00f));
	// give it to the obj
	m_model_mat = glm::translate(m_model_mat, glm::vec3(1.00f, 0.00f, 0.00f));
	// same thing for y
	m_model_mat = glm::rotate(m_model_mat, glm::radians(global_angle_y), glm::vec3(0.00f, 1.00f, 0.00f));
	m_model_mat = glm::translate(m_model_mat, glm::vec3(0.00f, 1.00f, 0.00f));

	
}
