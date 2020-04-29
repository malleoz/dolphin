// Copyright 2020 Dolphin Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#pragma once

// Class written by Tales Carvalho (a.k.a. THC98) and Sean Owens (a.k.a. Malleo)

#include <algorithm>
#include <string>
#include <vector>

#include <QDialog>
#include <QCheckBox>
#include <QTableWidget>

#include "Core/Movie.h"
#include "MainWindow.h"

#include "InputCommon/GCPadStatus.h"

struct TAStudioInput
{
  u64 FrameCount;
  u64 InputCount;
  GCPadStatus Input;
};

/*class InputGrid : public wxGrid
{
private:
  enum
  {
    COLUMN_INPUT_COUNT = 0,
    COLUMN_VI_COUNT,
    COLUMN_ANA_X,
    COLUMN_ANA_Y,
    COLUMN_A,
    COLUMN_B,
    COLUMN_X,
    COLUMN_Y,
    COLUMN_S,
    COLUMN_Z,
    COLUMN_L,
    COLUMN_R,
    COLUMN_L_ANA,
    COLUMN_R_ANA,
    COLUMN_D_UP,
    COLUMN_D_DOWN,
    COLUMN_D_LEFT,
    COLUMN_D_RIGHT,
    COLUMN_C_X,
    COLUMN_C_Y
  };
  
  u64 m_firstInputInGrid;
  int m_gridNumberOfRows;
};*/

class TAStudioFrame : public QDialog
{
protected:
  /*wxStaticBoxSizer* m_controlWrapper;
  InputGrid* m_inputGrid;
  // wxTextCtrl* m_saveFrameState;
  wxTextCtrl* m_inputFrameCount;
  // wxTextCtrl* m_currentInput;
  wxCheckBox* m_sendInputsToDolphin;
  wxCheckBox* m_groupByVI;*/
  QString movieName;
  QTableWidget* m_input_table;
  QStringList m_columnHeaders = {
    tr("Frame"), tr("aX"), tr("aY"), tr("A"), tr("B"),
    tr("X"), tr("Y"), tr("S"), tr("Z"), tr("L"), tr("R"),
    tr("La"), tr("Ra"), tr("dU"), tr("dD"), tr("dL"),
    tr("dR"), tr("cX"), tr("cY")
  };
  std::vector<TAStudioInput> m_inputVector;

public:
  /*TAStudioFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("TAStudio"),
                const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize,
                long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);*/
  TAStudioFrame(QWidget* parent);
  void GetMovieName(QString name);
  void GetInput(GCPadStatus* PadStatus);
  void SetInput(GCPadStatus* PadStatus);
};
