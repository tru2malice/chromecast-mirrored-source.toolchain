
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_table_AbstractTableModel__
#define __javax_swing_table_AbstractTableModel__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
          class EventListenerList;
          class TableModelEvent;
          class TableModelListener;
      }
      namespace table
      {
          class AbstractTableModel;
      }
    }
  }
}

class javax::swing::table::AbstractTableModel : public ::java::lang::Object
{

public:
  AbstractTableModel();
  virtual ::java::lang::String * getColumnName(jint);
  virtual jint findColumn(::java::lang::String *);
  virtual ::java::lang::Class * getColumnClass(jint);
  virtual jboolean isCellEditable(jint, jint);
  virtual void setValueAt(::java::lang::Object *, jint, jint);
  virtual void addTableModelListener(::javax::swing::event::TableModelListener *);
  virtual void removeTableModelListener(::javax::swing::event::TableModelListener *);
  virtual JArray< ::javax::swing::event::TableModelListener * > * getTableModelListeners();
  virtual void fireTableDataChanged();
  virtual void fireTableStructureChanged();
  virtual void fireTableRowsInserted(jint, jint);
  virtual void fireTableRowsUpdated(jint, jint);
  virtual void fireTableRowsDeleted(jint, jint);
  virtual void fireTableCellUpdated(jint, jint);
  virtual void fireTableChanged(::javax::swing::event::TableModelEvent *);
  virtual JArray< ::java::util::EventListener * > * getListeners(::java::lang::Class *);
  virtual jint getRowCount() = 0;
  virtual jint getColumnCount() = 0;
  virtual ::java::lang::Object * getValueAt(jint, jint) = 0;
public: // actually package-private
  static const jlong serialVersionUID = -5798593159423650347LL;
public: // actually protected
  ::javax::swing::event::EventListenerList * __attribute__((aligned(__alignof__( ::java::lang::Object)))) listenerList;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_table_AbstractTableModel__