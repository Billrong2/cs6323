#include "Animation.h"
#include <glm/gtc/matrix_transform.hpp>
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
	global_angle_b = 0.0f;
}
