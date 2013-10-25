#include "ExampleCommand.h"

ExampleCommand::ExampleCommand() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void ExampleCommand::Initialize() {
	printf("Inittialize\n");
}

// Called repeatedly when this Command is scheduled to run
void ExampleCommand::Execute() {
	printf("Execute\n");
	
}

// Make this return true when this Command no longer needs to run execute()
bool ExampleCommand::IsFinished() {
	printf("IsFinished\n");
	return false;
}

// Called once after isFinished returns true
void ExampleCommand::End() {
	printf("End\n");
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ExampleCommand::Interrupted() {
	printf("Interrupted\n");
}
