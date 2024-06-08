#include "DepSearchForm.h"

System::Void SalesSystemGUIApp::DepSearchForm::dgvdeps_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	int depId = Convert::ToInt32(dgvdeps->Rows[dgvdeps->SelectedCells[0]->RowIndex]->Cells[0]->Value);
	//
}
